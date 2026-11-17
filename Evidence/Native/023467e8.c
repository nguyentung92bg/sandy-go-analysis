/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$CurrentStoreItemId
int32_t Dino_BusSand_App_Meta_PassportFeature__CurrentStoreItemId (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$CurrentStoreItemId
   int32_t Dino_BusSand_App_Meta_PassportFeature__CurrentStoreItemId
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_PassportFeature__CurrentStoreItemId_22467e8(undefined8 param_1)

{
  undefined4 uVar1;
  double *pdVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  uint uStack_14;
  
  if ((bRam0000000004f9bf61 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb3350);
    FUN_02132f7c(PTR_DAT_04cb31a0);
    bRam0000000004f9bf61 = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_PassportFeature__get_HasSnapshot_2246084(param_1);
  if ((uVar4 & 1) != 0) {
    lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x44);
      if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac018);
      }
      uVar6 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)PTR_DAT_04cb3350,uVar1,0);
      plVar7 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8
                                 (uVar6,*(undefined8 *)PTR_DAT_04cb31a0,0);
      uStack_14 = 0;
      uVar8 = 0;
      if (plVar7 != (long *)0x0) {
        lVar5 = *plVar7;
        if (lVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
          pdVar2 = (double *)thunk_FUN_0216e9e4(plVar7,0,0);
          uVar8 = 0x80000000;
          if (*pdVar2 != INFINITY) {
            uVar8 = (int)*pdVar2;
          }
        }
        else if (lVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
          pbVar3 = (byte *)thunk_FUN_0216e9e4(plVar7,0,0);
          uVar8 = (uint)*pbVar3;
        }
        else if ((lVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) &&
                (uVar4 = System_Int32__TryParse_482de64(plVar7,&uStack_14,0), uVar8 = uStack_14,
                (uVar4 & 1) == 0)) {
          uVar8 = 0;
        }
      }
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

