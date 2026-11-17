/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$EnsureMonth
void Dino_BusSand_App_Meta_DailyChallengeModel__EnsureMonth (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$EnsureMonth
   void Dino_BusSand_App_Meta_DailyChallengeModel__EnsureMonth
   (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_DailyChallengeModel__EnsureMonth_222e490(long param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
                    /* try { // try from 0232e4a4 to 0242e4ab has its CatchHandler @ 0232e540 */
  if ((bRam0000000004f9be5a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad858);
                    /* try { // try from 0232e4bc to 0242e4c3 has its CatchHandler @ 0232e538 */
    bRam0000000004f9be5a = 1;
  }
                    /* try { // try from 0232e4c4 to 0242e4f3 has its CatchHandler @ 0232e200 */
                    /* try { // try from 0232e4f4 to 0242e4f7 has its CatchHandler @ 0232e544 */
  lVar3 = SUB168(SEXT816((long)(86399999 - param_2)) * SEXT816(-0x636ba875fd33dc87),8);
                    /* try { // try from 0232e4f8 to 0242e4fb has its CatchHandler @ 0232e550 */
                    /* try { // try from 0232e4fc to 0242e4ff has its CatchHandler @ 0232e53c */
  uStack_28 = 0;
                    /* try { // try from 0232e500 to 0242e507 has its CatchHandler @ 0232e55c */
  uStack_2c = 0;
                    /* try { // try from 0232e508 to 0242e50b has its CatchHandler @ 0232e52c */
                    /* try { // try from 0232e50c to 0242e517 has its CatchHandler @ 0232e55c */
                    /* try { // try from 0232e518 to 0242e523 has its CatchHandler @ 0232e550 */
  uVar1 = param_2 / 86400000;
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar1 = (lVar3 >> 0x19) - (lVar3 >> 0x3f);
  }
                    /* try { // try from 0232e524 to 0242e577 has its CatchHandler @ 0232e200 */
  Dino_BusSand_App_Meta_Ev07Util__CivilFromDay_222d994
            (uVar1,(long)&uStack_28 + 4,&uStack_28,&uStack_2c);
                    /* catch() { ... } // from try @ 0232e3f4 with catch @ 0232e528 */
  lVar3 = *(long *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 0232e508 with catch @ 0232e52c */
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 0232e484 with catch @ 0232e530 */
                    /* catch() { ... } // from try @ 0232e468 with catch @ 0232e534 */
                    /* catch() { ... } // from try @ 0232e4bc with catch @ 0232e538 */
    iVar2 = (int)uStack_28 + uStack_28._4_4_ * 100;
                    /* catch() { ... } // from try @ 0232e4fc with catch @ 0232e53c */
                    /* catch() { ... } // from try @ 0232e4a4 with catch @ 0232e540 */
                    /* catch() { ... } // from try @ 0232e4f4 with catch @ 0232e544 */
    if (*(int *)(lVar3 + 0x18) == iVar2) {
                    /* try { // try from 0232e578 to 0242e57b has its CatchHandler @ 0232e594 */
                    /* try { // try from 0232e57c to 0242e597 has its CatchHandler @ 0232e200 */
      return;
    }
                    /* catch() { ... } // from try @ 0232e474 with catch @ 0232e548 */
    lVar4 = *(long *)(lVar3 + 0x20);
                    /* catch() { ... } // from try @ 0232e3e0 with catch @ 0232e54c */
    *(int *)(lVar3 + 0x18) = iVar2;
                    /* catch() { ... } // from try @ 0232e4f8 with catch @ 0232e550
                       catch() { ... } // from try @ 0232e518 with catch @ 0232e550 */
    if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 0232e440 with catch @ 0232e554 */
                    /* catch() { ... } // from try @ 0232e410 with catch @ 0232e558 */
      lVar3 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 0232e500 with catch @ 0232e55c
                       catch() { ... } // from try @ 0232e50c with catch @ 0232e55c */
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

