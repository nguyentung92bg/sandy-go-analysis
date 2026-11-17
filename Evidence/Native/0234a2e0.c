/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$WinOnce
void Dino_BusSand_App_Meta_PassportFeature__WinOnce (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$WinOnce
   void Dino_BusSand_App_Meta_PassportFeature__WinOnce (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, int32_t type, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__WinOnce_224a2e0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000004f9bf88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf88 = 1;
  }
  uVar3 = Dino_BusSand_App_Meta_PassportFeature__IsCheat_2245ecc(param_1);
  if (((((uVar3 & 1) == 0) &&
       (uVar3 = Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58(param_1),
       (uVar3 & 1) != 0)) &&
      (uVar3 = Dino_BusSand_App_Meta_PassportFeature__IsPassportActive_22462e8(param_1),
      (uVar3 & 1) != 0)) &&
     (iVar2 = Dino_BusSand_App_Meta_PassportFeature__Produce_2244c64(param_1,param_2), 0 < iVar2)) {
    lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar4 + 0x14) != 2) {
      Dino_BusSand_App_Meta_PassportFeature__AddPendingKeys_2247378(param_1,iVar2);
      puVar1 = PTR_DAT_04caef48;
      lVar4 = *(long *)PTR_DAT_04caef48;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar1;
      }
                    /* try { // try from 0234a3b4 to 0244a437 has its CatchHandler @ 0234a934 */
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0234a3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        return;
      }
    }
  }
  return;
}

