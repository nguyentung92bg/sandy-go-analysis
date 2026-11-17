/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$StoreDurationHours
int32_t Dino_BusSand_App_Meta_GiftPackFeature__StoreDurationHours (Dino_BusSand_App_Meta_GiftPackConfig_o* c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$StoreDurationHours
   int32_t Dino_BusSand_App_Meta_GiftPackFeature__StoreDurationHours
   (Dino_BusSand_App_Meta_GiftPackConfig_o* c, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_GiftPackFeature__StoreDurationHours_223a21c(long param_1)

{
  int iVar1;
  ulong uVar2;
  double *pdVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  uint uStack_14;
  
  if ((bRam0000000004f9bebf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb35c8);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9bebf = 1;
  }
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x18), 0 < iVar1)) {
    if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)PTR_DAT_04cad200,iVar1,0);
    plVar6 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(uVar5,*(undefined8 *)PTR_DAT_04cb35c8,0)
    ;
    uStack_14 = 0;
    uVar8 = 0;
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      if (lVar7 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
        pdVar3 = (double *)thunk_FUN_0216e9e4(plVar6,0,0);
        uVar8 = 0x80000000;
        if (*pdVar3 != INFINITY) {
          uVar8 = (int)*pdVar3;
        }
      }
      else if (lVar7 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
        pbVar4 = (byte *)thunk_FUN_0216e9e4(plVar6,0,0);
        uVar8 = (uint)*pbVar4;
      }
      else if ((lVar7 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) &&
              (uVar2 = System_Int32__TryParse_482de64(plVar6,&uStack_14,0), uVar8 = uStack_14,
              (uVar2 & 1) == 0)) {
        uVar8 = 0;
      }
    }
    return uVar8;
  }
  return 0;
}

