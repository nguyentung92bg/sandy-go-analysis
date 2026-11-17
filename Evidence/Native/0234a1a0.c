/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$AutoOpenOrClosePassport
bool Dino_BusSand_App_Meta_PassportFeature__AutoOpenOrClosePassport (Dino_BusSand_App_Meta_PassportFeature_o* __this, bool checkOpen, bool checkFinished, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$AutoOpenOrClosePassport
   bool Dino_BusSand_App_Meta_PassportFeature__AutoOpenOrClosePassport
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, bool checkOpen, bool checkFinished, const
   MethodInfo* method); */

undefined4
Dino_BusSand_App_Meta_PassportFeature__AutoOpenOrClosePassport_224a1a0
          (undefined8 param_1,ulong param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if ((bRam0000000004f9bf89 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04cb3a28);
    FUN_02132f7c(PTR_DAT_04cb0758);
    bRam0000000004f9bf89 = 1;
  }
  if ((param_2 & 1) != 0) {
    lVar1 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(lVar1 + 0x14) == 2) {
      Dino_BusSand_App_Meta_PassportFeature__OnPassportCycleSnapshotExpired_22495f0(param_1);
    }
    uVar2 = Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportOpen_2246458(param_1);
    if ((uVar2 & 1) != 0) {
      Dino_BusSand_App_Meta_PassportFeature__StartPassport_2249b48(param_1);
      Dino_BusSand_App_Meta_PassportFeature__AddHallCmd_224a0bc
                (param_1,*(undefined8 *)PTR_DAT_04cb0758);
      uVar3 = 1;
      goto joined_r0x0234a258;
    }
  }
  uVar3 = 0;
joined_r0x0234a258:
  if (((param_3 & 1) != 0) &&
     (uVar2 = Dino_BusSand_App_Meta_PassportFeature__NeedShowPassportResult_22464f0(param_1),
     (uVar2 & 1) != 0)) {
    Dino_BusSand_App_Meta_PassportFeature__AddHallCmd_224a0bc
              (param_1,*(undefined8 *)PTR_DAT_04cb3a28);
    uVar3 = 1;
  }
  return uVar3;
}

