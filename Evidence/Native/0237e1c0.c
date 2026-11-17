/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$OwnerScale
System_Nullable_Vector3__o Dino_BusSand_App_UI_KitAdopt__OwnerScale (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$OwnerScale
   System_Nullable_Vector3__o Dino_BusSand_App_UI_KitAdopt__OwnerScale (UnityEngine_Transform_o* t,
   const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_KitAdopt__OwnerScale_227e1c0(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c133 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4c28);
    FUN_02132f7c(PTR_DAT_04cb18b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c133 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  lVar4 = 0;
  if ((uVar3 & 1) != 0) {
    if (param_1 == 0) goto LAB_0237e2b8;
    lVar4 = UnityEngine_Component__GetComponent_object__26f97e8
                      (param_1,*(undefined8 *)PTR_DAT_04cb4c28);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    if (lVar4 == 0) {
LAB_0237e2b8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uStack_30 = 0;
    uStack_28 = 0;
    System_Nullable_Vector3____ctor_2bd0e4c
              (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
               *(undefined4 *)(lVar4 + 0x28),&uStack_30,*(undefined8 *)PTR_DAT_04cb18b8);
  }
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}

