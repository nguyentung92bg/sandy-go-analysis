/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$Item
int32_t Dino_BusSand_App_Meta_Monetization__Item (int32_t shopId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$Item
   int32_t Dino_BusSand_App_Meta_Monetization__Item (int32_t shopId, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_Monetization__Item_2265e14(undefined4 param_1)

{
  ulong uVar1;
  double *pdVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  uint uStack_14;
  
  if ((bRam0000000004f9c059 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2130);
    bRam0000000004f9c059 = 1;
  }
  lVar4 = Dino_BusSand_App_Meta_Monetization__BoosterByShop_2265914(param_1);
  if (lVar4 != 0) {
    plVar5 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(lVar4,*(undefined8 *)PTR_DAT_04cb2130,0)
    ;
    uStack_14 = 0;
    uVar6 = 0;
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      if (lVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
        pdVar2 = (double *)thunk_FUN_0216e9e4(plVar5,0,0);
        uVar6 = 0x80000000;
        if (*pdVar2 != INFINITY) {
          uVar6 = (int)*pdVar2;
        }
      }
      else if (lVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
        pbVar3 = (byte *)thunk_FUN_0216e9e4(plVar5,0,0);
        uVar6 = (uint)*pbVar3;
      }
      else if ((lVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) &&
              (uVar1 = System_Int32__TryParse_482de64(plVar5,&uStack_14,0), uVar6 = uStack_14,
              (uVar1 & 1) == 0)) {
        uVar6 = 0;
      }
    }
    return uVar6;
  }
  return 0;
}

