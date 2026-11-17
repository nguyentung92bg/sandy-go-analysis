/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnLevelWin
void Dino_BusSand_App_Meta_PassportFeature__OnLevelWin (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t type, int32_t clearedLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0234a250) */
/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnLevelWin
   void Dino_BusSand_App_Meta_PassportFeature__OnLevelWin (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, int32_t type, int32_t clearedLevel, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_PassportFeature__OnLevelWin_224a298
                (undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = Dino_BusSand_App_Meta_PassportFeature__IsCheat_2245ecc();
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
                    /* try { // try from 0234a2bc to 0244a3b3 has its CatchHandler @ 0234a2bc
                       catch() { ... } // from try @ 0234a2bc with catch @ 0234a2bc
                       catch() { ... } // from try @ 0234a7e0 with catch @ 0234a2bc
                       catch() { ... } // from try @ 0234a8c8 with catch @ 0234a2bc
                       catch() { ... } // from try @ 0234a964 with catch @ 0234a2bc
                       catch() { ... } // from try @ 0234a9cc with catch @ 0234a2bc */
  Dino_BusSand_App_Meta_PassportFeature__WinOnce_224a2e0(param_1,param_2);
  if ((bRam0000000004f9bf89 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04cb3a28);
    FUN_02132f7c(PTR_DAT_04cb0758);
    bRam0000000004f9bf89 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar2 + 0x14) == 2) {
    Dino_BusSand_App_Meta_PassportFeature__OnPassportCycleSnapshotExpired_22495f0(param_1);
  }
  uVar3 = Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportOpen_2246458(param_1);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    Dino_BusSand_App_Meta_PassportFeature__StartPassport_2249b48(param_1);
    Dino_BusSand_App_Meta_PassportFeature__AddHallCmd_224a0bc
              (param_1,*(undefined8 *)PTR_DAT_04cb0758);
  }
  uVar4 = (uint)bVar1;
  uVar3 = Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportResult_22464f0(param_1);
  if ((uVar3 & 1) != 0) {
    Dino_BusSand_App_Meta_PassportFeature__AddHallCmd_224a0bc
              (param_1,*(undefined8 *)PTR_DAT_04cb3a28);
    uVar4 = 1;
  }
  return (ulong)uVar4;
}

