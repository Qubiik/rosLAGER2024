
(cl:in-package :asdf)

(defsystem "sus2-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "AddTwoins" :depends-on ("_package_AddTwoins"))
    (:file "_package_AddTwoins" :depends-on ("_package"))
  ))