/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$IsCheat
bool Dino_BusSand_App_Meta_PassportFeature__IsCheat (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$IsCheat
   bool Dino_BusSand_App_Meta_PassportFeature__IsCheat (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__IsCheat_2245ecc(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf51 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf51 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x68) < 1) {
      bVar2 = false;
    }
    else {
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      if (lVar3 == 0) goto LAB_02345f54;
      lVar4 = *(long *)(lVar3 + 0x68);
      lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
      bVar2 = lVar3 < lVar4;
    }
    return bVar2;
  }
LAB_02345f54:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

