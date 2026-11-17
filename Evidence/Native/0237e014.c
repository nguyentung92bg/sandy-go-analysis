/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$RestPos
void Dino_BusSand_App_UI_KitAdopt__RestPos (UnityEngine_RectTransform_o* t, System_Func_Vector2__o* get, System_Action_Vector2__o* set, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$RestPos
   void Dino_BusSand_App_UI_KitAdopt__RestPos (UnityEngine_RectTransform_o* t,
   System_Func_Vector2__o* get, System_Action_Vector2__o* set, const MethodInfo* method); */

void Dino_BusSand_App_UI_KitAdopt__RestPos_227e014
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 uStack_44;
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cad7b8;
  if ((bRam0000000004f9c132 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4c00);
    FUN_02132f7c(PTR_DAT_04cb4c08);
    FUN_02132f7c(PTR_DAT_04cb4c10);
    FUN_02132f7c(PTR_DAT_04cb4c18);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4c20);
    bRam0000000004f9c132 = 1;
  }
  lStack_40 = 0;
  lStack_38 = 0;
  uStack_44 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_UI_KitAdopt__Find_227d710(param_1,&lStack_38,&uStack_44);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (lStack_38 != 0) {
    plVar4 = (long *)(lStack_38 + 0x48);
    if (*plVar4 == 0) {
      lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4c18);
      System_Collections_Generic_Dictionary_object__object____ctor_34b3628
                (lVar3,*(undefined8 *)PTR_DAT_04cb4c08);
      *plVar4 = lVar3;
      thunk_FUN_02134474(plVar4,lVar3);
      if (lStack_38 == 0) goto LAB_0237e1bc;
    }
    if (*(long *)(lStack_38 + 0x48) != 0) {
      uVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (*(long *)(lStack_38 + 0x48),param_1,&lStack_40,
                         *(undefined8 *)PTR_DAT_04cb4c00);
      if ((uVar2 & 1) == 0) {
        if (lStack_38 == 0) goto LAB_0237e1bc;
        lVar5 = *(long *)(lStack_38 + 0x48);
        lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4c20);
        System_Object___ctor_4870e5c(lVar3,0);
        lStack_40 = lVar3;
        if (lVar5 == 0) goto LAB_0237e1bc;
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar5,param_1,lVar3,*(undefined8 *)PTR_DAT_04cb4c10);
      }
      if (lStack_40 != 0) {
        *(undefined8 *)(lStack_40 + 0x20) = param_2;
        thunk_FUN_02134474((undefined8 *)(lStack_40 + 0x20),param_2);
        if (lStack_40 != 0) {
          *(undefined8 *)(lStack_40 + 0x28) = param_3;
          thunk_FUN_02134474((undefined8 *)(lStack_40 + 0x28),param_3);
          return;
        }
      }
    }
  }
LAB_0237e1bc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

