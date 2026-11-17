/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnFinalFail
void Dino_BusSand_App_Meta_PassportFeature__OnFinalFail (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0234a250) */
/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnFinalFail
   void Dino_BusSand_App_Meta_PassportFeature__OnFinalFail (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__OnFinalFail_224a3e4(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam0000000004f9bf89 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04cb3a28);
    FUN_02132f7c(PTR_DAT_04cb0758);
    bRam0000000004f9bf89 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar3 + 0x14) == 2) {
    Dino_BusSand_App_Meta_PassportFeature__OnPassportCycleSnapshotExpired_22495f0(param_1);
  }
  uVar4 = Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportOpen_2246458(param_1);
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    Dino_BusSand_App_Meta_PassportFeature__StartPassport_2249b48(param_1);
    Dino_BusSand_App_Meta_PassportFeature__AddHallCmd_224a0bc
              (param_1,*(undefined8 *)PTR_DAT_04cb0758);
  }
  uVar4 = Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportResult_22464f0(param_1);
  bVar2 = (uVar4 & 1) != 0;
  if (bVar2) {
    Dino_BusSand_App_Meta_PassportFeature__AddHallCmd_224a0bc
              (param_1,*(undefined8 *)PTR_DAT_04cb3a28);
  }
  return bVar2 || bVar1;
}

