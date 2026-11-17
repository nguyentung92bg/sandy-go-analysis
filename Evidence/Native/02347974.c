/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$ClaimFree
bool Dino_BusSand_App_Meta_PassportFeature__ClaimFree (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$ClaimFree
   bool Dino_BusSand_App_Meta_PassportFeature__ClaimFree (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, int32_t i, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_PassportFeature__ClaimFree_2247974(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000004f9bf74 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cb25f0);
    bRam0000000004f9bf74 = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_PassportFeature__CanClaimFree_2247144(param_1,param_2);
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    lVar5 = Dino_BusSand_App_Meta_PassportFeature__get_Cfg_224493c(param_1);
    uVar6 = 0;
    if (lVar5 != 0) {
      uVar6 = Dino_BusSand_App_Meta_PassportFeature__StageRewards_2245468(param_1,param_2,0);
      puVar2 = PTR_DAT_04caef48;
      if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caef48);
      }
      Dino_BusSand_App_Meta_PassportFeature__Grant_22456fc(uVar6,*(undefined8 *)PTR_DAT_04cb25f0);
      puVar3 = PTR_DAT_04cb01b0;
      lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0x30) == 0)) goto LAB_02347b64;
      uVar4 = System_Collections_Generic_List_int___Contains_3a2c3ec
                        (*(long *)(lVar5 + 0x30),param_2,*(undefined8 *)PTR_DAT_04cad860);
      if ((uVar4 & 1) == 0) {
        lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar3);
        if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x30), lVar5 == 0)) {
LAB_02347b64:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar7 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)PTR_DAT_04caa160;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_02347b64;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = param_2;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar5,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                    );
        }
      }
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                (param_1,*(undefined8 *)PTR_DAT_04cb0558);
      Dino_BusSand_App_Meta_PassportFeature__TrackReward_2247b68(param_1,0,0,param_2,uVar6);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
      uVar6 = 1;
    }
  }
  return uVar6;
}

