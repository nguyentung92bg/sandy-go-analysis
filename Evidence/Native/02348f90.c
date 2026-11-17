/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$FinishPassport
System_Collections_Generic_List_PassportFeature_Reward__o* Dino_BusSand_App_Meta_PassportFeature__FinishPassport (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$FinishPassport
   System_Collections_Generic_List_PassportFeature_Reward__o*
   Dino_BusSand_App_Meta_PassportFeature__FinishPassport (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_PassportFeature__FinishPassport_2248f90(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf79 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0388);
    FUN_02132f7c(PTR_DAT_04cb0390);
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf79 = 1;
  }
  uVar3 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar3);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x14) == 2) {
      uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0390);
      System_Collections_Generic_List_PassportFeature_Reward____ctor_3b57a78
                (uVar3,*(undefined8 *)PTR_DAT_04cb0388);
    }
    else {
      uVar3 = Dino_BusSand_App_Meta_PassportFeature__GiveAllLeftReward_2248944(param_1);
      lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_04cb0558;
      if (lVar2 == 0) goto LAB_023490bc;
      *(undefined4 *)(lVar2 + 0x14) = 2;
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_04caef48;
      lVar2 = *(long *)PTR_DAT_04caef48;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
    }
    return uVar3;
  }
LAB_023490bc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

