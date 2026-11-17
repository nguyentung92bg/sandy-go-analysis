/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$Anim
UnityEngine_Animation_o* Dino_BusSand_App_UI_CommerceUi__Anim (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$Anim
   UnityEngine_Animation_o* Dino_BusSand_App_UI_CommerceUi__Anim (UnityEngine_Transform_o* t, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_CommerceUi__Anim_22ac584(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c2b0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c2b0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    if (param_1 != 0) {
      lVar3 = *(long *)PTR_DAT_04cada30;
      lVar4 = *(long *)(lVar3 + 0x38);
      if (lVar4 == 0) {
        FUN_0216b4cc(lVar3);
        lVar4 = *(long *)(lVar3 + 0x38);
      }
      uStack_28 = 0;
      uVar5 = *(undefined8 *)(lVar4 + 8);
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = System_Type__GetTypeFromHandle_483f0b4(uVar5,0);
      UnityEngine_Component__GetComponentFastPath_43bcf7c(param_1,uVar5,&uStack_28,0);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

