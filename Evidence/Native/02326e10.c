/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$WorthOf
int64_t Dino_BusSand_App_Meta_BattleRoyaleRules__WorthOf (int32_t itemId, int64_t num, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$WorthOf
   int64_t Dino_BusSand_App_Meta_BattleRoyaleRules__WorthOf (int32_t itemId, int64_t num, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleRules__WorthOf_2226e10(int param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bdf3 & 1) == 0) {
                    /* try { // try from 02326e40 to 02426e6b has its CatchHandler @ 02327024 */
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb2cf8);
    FUN_02132f7c(PTR_DAT_04cb2d00);
    bRam0000000004f9bdf3 = 1;
  }
  puVar3 = PTR_DAT_04cb2d00;
  puVar2 = PTR_DAT_04cb2cf8;
                    /* try { // try from 02326e7c to 02426e87 has its CatchHandler @ 0232700c */
                    /* try { // try from 02326e94 to 02426ea7 has its CatchHandler @ 0232702c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar3,param_1,0);
                    /* try { // try from 02326eb0 to 02426ebb has its CatchHandler @ 02327010 */
  uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,*(undefined8 *)puVar2,0);
  iVar4 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar7,0,0);
  lVar8 = 0;
  if (((0 < param_2) && (lVar6 != 0)) && (0 < iVar4)) {
                    /* try { // try from 02326eec to 02426f23 has its CatchHandler @ 02327030 */
    if (param_1 - 0x3e9U < 2) {
      uVar9 = 1;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_Meta_Economy__ItemPrice_2203f6c(param_1,0);
      if ((int)uVar5 < 1) {
        return 0;
      }
                    /* try { // try from 02326f24 to 02426fe7 has its CatchHandler @ 02326c34 */
      uVar9 = (ulong)uVar5;
    }
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar10 = ((double)iVar4 * (double)(long)(uVar9 * param_2)) / _UNK_00e69df0;
    lVar8 = -0x8000000000000000;
    if ((double)(long)dVar10 != INFINITY) {
      lVar8 = (long)dVar10;
    }
  }
  return lVar8;
}

