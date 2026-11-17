/* IL2CPP: Dino.BusSand.View.SandBoardView$$BeginPour
void Dino_BusSand_View_SandBoardView__BeginPour (Dino_BusSand_View_SandBoardView_o* __this, float duration, int32_t seed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.SandBoardView$$BeginPour
   void Dino_BusSand_View_SandBoardView__BeginPour (Dino_BusSand_View_SandBoardView_o* __this, float
   duration, int32_t seed, const MethodInfo* method); */

void Dino_BusSand_View_SandBoardView__BeginPour_23e66bc
               (float param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *puVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_a4;
  
                    /* try { // try from 024e66d4 to 025e66d7 has its CatchHandler @ 024e66f8 */
                    /* try { // try from 024e66d8 to 025e66fb has its CatchHandler @ 024e607c */
                    /* catch() { ... } // from try @ 024e66d4 with catch @ 024e66f8 */
                    /* try { // try from 024e66fc to 025e6703 has its CatchHandler @ 024e670c */
  if ((bRam0000000004f9ca82 & 1) == 0) {
                    /* try { // try from 024e6704 to 025e670f has its CatchHandler @ 024e607c */
    FUN_02132f7c(PTR_DAT_04caadd0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024e66fc with catch @ 024e670c
                        */
    bRam0000000004f9ca82 = 1;
  }
  puVar9 = PTR_DAT_04caadd0;
  lVar10 = *(long *)(param_2 + 0x20);
  uStack_a4 = 0;
  if (lVar10 != 0) {
    uVar2 = *(uint *)(lVar10 + 0x10);
    uVar3 = *(uint *)(lVar10 + 0x14);
    lVar10 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,uVar3 * uVar2);
    plVar13 = (long *)(param_2 + 0x80);
    *plVar13 = lVar10;
    thunk_FUN_02134474(plVar13,lVar10);
    lVar10 = FUN_02133068(*(undefined8 *)puVar9,uVar3);
    plVar14 = (long *)(param_2 + 0x88);
    *plVar14 = lVar10;
    thunk_FUN_02134474(plVar14,lVar10);
    Dino_BusSand_Core_SandRandom___ctor_24170bc(&uStack_a4,param_3,7,0);
    fVar8 = _UNK_00e20a94;
    fVar7 = _UNK_00e208d0;
    fVar6 = _UNK_00e2065c;
    fVar5 = _UNK_00e205f8;
    fVar4 = _UNK_00e201f4;
    fVar21 = _UNK_00e2043c;
    if (0 < (int)uVar3) {
      fVar21 = 0.0;
      lVar10 = *plVar14;
      uVar11 = 0;
      uVar15 = 0;
      do {
        if (lVar10 == 0) {
LAB_024e6950:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar15) {
LAB_024e6954:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        fVar19 = (float)(int)(uVar3 - (int)uVar15) / (float)(int)uVar3 + fVar5;
        *(float *)(lVar10 + uVar15 * 4 + 0x20) = SQRT((fVar19 + fVar19) / 11.0);
        if (0 < (int)uVar2) {
          lVar16 = (ulong)uVar11 << 0x20;
          uVar18 = 0;
          do {
            fVar19 = (float)Dino_BusSand_Core_SandRandom__NextFloat_2417130(&uStack_a4,0);
            lVar10 = *plVar14;
            if (lVar10 == 0) goto LAB_024e6950;
            if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_024e6954;
            lVar12 = *plVar13;
            if (lVar12 == 0) goto LAB_024e6950;
            if ((ulong)*(uint *)(lVar12 + 0x18) <= uVar11 + uVar18) goto LAB_024e6954;
            iVar17 = (int)uVar18;
            lVar1 = lVar16 >> 0x1e;
            uVar18 = uVar18 + 1;
            lVar16 = lVar16 + 0x100000000;
            fVar20 = ABS(((float)iVar17 + 0.5) / (float)(int)uVar2 + -0.5);
            fVar19 = ((float)(int)uVar15 / (float)(int)uVar3) * fVar7 + fVar4 +
                     (fVar20 + fVar20) * fVar6 + fVar19 * fVar8 +
                     *(float *)(lVar10 + uVar15 * 4 + 0x20);
            *(float *)(lVar12 + lVar1 + 0x20) = fVar19;
            if (fVar19 <= fVar21) {
              fVar19 = fVar21;
            }
            fVar21 = fVar19;
          } while (uVar2 != uVar18);
        }
        uVar15 = uVar15 + 1;
        uVar11 = uVar11 + uVar2;
      } while (uVar15 != uVar3);
      fVar21 = fVar21 + _UNK_00e2043c;
    }
    *(undefined4 *)(param_2 + 0x78) = 0;
    *(undefined1 *)(param_2 + 0x74) = 1;
    if (param_1 <= fVar21) {
      param_1 = fVar21;
    }
    *(float *)(param_2 + 0x7c) = param_1;
    Dino_BusSand_View_SandBoardView__AdvancePour_23e62f8(0,param_2);
  }
  return;
}

