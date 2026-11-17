/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$StageBox
int32_t Dino_BusSand_App_Meta_PassportFeature__StageBox (Dino_BusSand_App_Meta_PassportFeature_o* __this, System_String_o* key, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$StageBox
   int32_t Dino_BusSand_App_Meta_PassportFeature__StageBox (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, System_String_o* key, int32_t i, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_PassportFeature__StageBox_22451f0
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  double *pdVar1;
  byte *pbVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  
  if ((bRam0000000004f9bf45 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    bRam0000000004f9bf45 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_PassportFeature__CfgList_22449bc(param_1,param_2);
  if (((-1 < param_3) && (lVar3 != 0)) && (param_3 < *(int *)(lVar3 + 0x18))) {
    plVar4 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar3,param_3,*(undefined8 *)PTR_DAT_04cb15c0);
    uVar5 = 0;
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      if (lVar3 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
        pdVar1 = (double *)thunk_FUN_0216e9e4(plVar4,0,0);
        uVar5 = 0x80000000;
        if (*pdVar1 != INFINITY) {
          uVar5 = (int)*pdVar1;
        }
      }
      else if (lVar3 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
        pbVar2 = (byte *)thunk_FUN_0216e9e4(plVar4,0,0);
        uVar5 = (uint)*pbVar2;
      }
      else if (lVar3 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
        System_Int32__TryParse_482de64(plVar4,&stack0xffffffffffffffec,0);
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  return 0;
}

