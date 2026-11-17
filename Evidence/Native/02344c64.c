/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$Produce
int32_t Dino_BusSand_App_Meta_PassportFeature__Produce (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$Produce
   int32_t Dino_BusSand_App_Meta_PassportFeature__Produce (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, int32_t t, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_PassportFeature__Produce_2244c64(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  byte *pbVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  
  if ((bRam0000000004f9bf40 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb39a0);
                    /* try { // try from 02344c8c to 02444c93 has its CatchHandler @ 023450e8 */
    FUN_02132f7c(PTR_DAT_04cb39a8);
                    /* try { // try from 02344c9c to 02444ca7 has its CatchHandler @ 023450d0 */
    FUN_02132f7c(PTR_DAT_04cb39b0);
    bRam0000000004f9bf40 = 1;
  }
  lVar5 = Dino_BusSand_App_Meta_PassportFeature__get_Cfg_224493c(param_1);
  if (lVar5 != 0) {
                    /* try { // try from 02344ccc to 02444cdb has its CatchHandler @ 023450c8 */
    puVar1 = (undefined8 *)PTR_DAT_04cb39b0;
    if (param_2 != 2) {
      puVar1 = (undefined8 *)PTR_DAT_04cb39a0;
    }
    puVar2 = (undefined8 *)PTR_DAT_04cb39a8;
    if (param_2 != 1) {
      puVar2 = puVar1;
    }
    plVar6 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(lVar5,*puVar2,0);
    uVar7 = 0;
    if (plVar6 != (long *)0x0) {
      lVar5 = *plVar6;
      if (lVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
        pdVar3 = (double *)thunk_FUN_0216e9e4(plVar6,0,0);
        uVar7 = 0x80000000;
        if (*pdVar3 != INFINITY) {
          uVar7 = (int)*pdVar3;
        }
      }
      else if (lVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
        pbVar4 = (byte *)thunk_FUN_0216e9e4(plVar6,0,0);
        uVar7 = (uint)*pbVar4;
      }
      else if (lVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
        System_Int32__TryParse_482de64(plVar6,&stack0xffffffffffffffec,0);
        uVar7 = 0;
      }
    }
    return uVar7;
  }
  return 0;
}

