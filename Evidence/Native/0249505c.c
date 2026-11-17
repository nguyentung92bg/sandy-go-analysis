/* IL2CPP: Dino.BusSand.View.ChainRig$$ChordBack
float Dino_BusSand_View_ChainRig__ChordBack (Dino_BusSand_View_ChainRig_Hitch_o* h, UnityEngine_Vector3_o pin, float len, float maxS, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.ChainRig$$ChordBack
   float Dino_BusSand_View_ChainRig__ChordBack (Dino_BusSand_View_ChainRig_Hitch_o* h,
   UnityEngine_Vector3_o pin, float len, float maxS, const MethodInfo* method); */

float Dino_BusSand_View_ChainRig__ChordBack_239505c
                (float param_1,float param_2,float param_3,float param_4,float param_5,long param_6)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar22 = param_2;
  fVar21 = param_3;
  if ((bRam0000000004f9c8d3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
                    /* try { // try from 024950c0 to 02595173 has its CatchHandler @ 024950c0
                       catch() { ... } // from try @ 024950c0 with catch @ 024950c0
                       catch() { ... } // from try @ 02495190 with catch @ 024950c0
                       catch() { ... } // from try @ 02495210 with catch @ 024950c0
                       catch() { ... } // from try @ 02495240 with catch @ 024950c0
                       catch() { ... } // from try @ 02495264 with catch @ 024950c0 */
    FUN_02132f7c(PTR_DAT_04caea30);
    FUN_02132f7c(PTR_DAT_04caadd0);
    bRam0000000004f9c8d3 = 1;
  }
  puVar6 = PTR_DAT_04caea30;
  puVar5 = PTR_DAT_04caadd0;
  puVar4 = PTR_DAT_04caa1a8;
  fVar3 = _UNK_00e20b38;
  if ((param_6 != 0) && (lVar10 = *(long *)(param_6 + 0x68), lVar10 != 0)) {
    lVar11 = *(long *)(param_6 + 0x70);
    iVar12 = *(int *)(lVar10 + 0x18) + -1;
    if (0 < iVar12) {
      do {
        fVar14 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                  (lVar10,iVar12,*(undefined8 *)puVar4);
        iVar2 = iVar12 + -1;
        fVar17 = fVar22;
        fVar19 = fVar21;
        fVar15 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                  (lVar10,iVar2,*(undefined8 *)puVar4);
        fVar14 = fVar14 - fVar15;
        fVar22 = fVar22 - fVar17;
                    /* try { // try from 02495174 to 0259517b has its CatchHandler @ 02495220 */
        fVar21 = fVar21 - fVar19;
        fVar15 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                  (lVar10,iVar2,*(undefined8 *)puVar4);
                    /* try { // try from 0249518c to 0259518f has its CatchHandler @ 02495214 */
        fVar20 = fVar21 * fVar21 + fVar14 * fVar14 + fVar22 * fVar22;
                    /* try { // try from 02495190 to 02595207 has its CatchHandler @ 024950c0 */
        if (fVar3 <= fVar20) {
          fVar16 = fVar17 - param_2;
          fVar18 = fVar19 - param_3;
          fVar15 = fVar15 - param_1;
          fVar21 = fVar21 * fVar18 + fVar14 * fVar15 + fVar22 * fVar16;
          fVar21 = fVar21 + fVar21;
          fVar17 = fVar20 * -4.0;
          fVar19 = fVar21 * fVar21;
          fVar22 = fVar19 + fVar17 * ((fVar18 * fVar18 + fVar15 * fVar15 + fVar16 * fVar16) -
                                     param_4 * param_4);
          if (0.0 <= fVar22) {
            lVar7 = FUN_02133068(*(undefined8 *)puVar5,2);
                    /* try { // try from 02495208 to 0259520b has its CatchHandler @ 0249521c */
            if (lVar7 == 0) goto LAB_02495350;
                    /* try { // try from 0249520c to 0259520f has its CatchHandler @ 02495218 */
            iVar8 = (int)*(ulong *)(lVar7 + 0x18);
                    /* try { // try from 02495210 to 0259523b has its CatchHandler @ 024950c0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249518c with catch @ 02495214
                        */
            if (iVar8 == 0) {
LAB_0249534c:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0249520c with catch @ 02495218
                        */
            fVar22 = SQRT(fVar22);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02495208 with catch @ 0249521c
                        */
            fVar17 = fVar20 + fVar20;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02495174 with catch @ 02495220
                        */
            *(float *)(lVar7 + 0x20) = (fVar22 - fVar21) / fVar17;
            if (iVar8 == 1) goto LAB_0249534c;
            fVar19 = -fVar21;
                    /* try { // try from 0249523c to 0259523f has its CatchHandler @ 02495258 */
                    /* try { // try from 02495240 to 0259525b has its CatchHandler @ 024950c0 */
            *(float *)(lVar7 + 0x24) = (fVar19 - fVar22) / fVar17;
            if (0 < iVar8) {
              uVar13 = 0;
              uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
              do {
                    /* catch() { ... } // from try @ 0249523c with catch @ 02495258 */
                    /* try { // try from 0249525c to 02595263 has its CatchHandler @ 0249526c */
                if (uVar9 <= uVar13) goto LAB_0249534c;
                fVar22 = *(float *)(lVar7 + 0x20 + uVar13 * 4);
                    /* try { // try from 02495264 to 0259526f has its CatchHandler @ 024950c0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0249525c with catch @ 0249526c
                        */
                if ((0.0 <= fVar22) && (fVar22 <= 1.0)) {
                  if (lVar11 == 0) goto LAB_02495350;
                  fVar15 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                                            (lVar11,iVar2,*(undefined8 *)puVar6);
                  fVar21 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                                            (lVar11,iVar12,*(undefined8 *)puVar6);
                  fVar14 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                                            (lVar11,iVar2,*(undefined8 *)puVar6);
                  fVar15 = fVar15 + fVar22 * (fVar21 - fVar14);
                  if (fVar15 <= param_5) {
                    return fVar15;
                  }
                  uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
                }
                uVar13 = uVar13 + 1;
              } while ((long)uVar13 < (long)(int)uVar9);
            }
          }
        }
        bVar1 = 1 < iVar12;
        fVar22 = fVar17;
        fVar21 = fVar19;
        iVar12 = iVar2;
      } while (bVar1);
    }
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) == 0) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_48509f0
                  (0,0,*(undefined8 *)puVar6);
      }
      lVar10 = *(long *)(lVar11 + 0x10);
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x18) != 0) {
          return *(float *)(lVar10 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_02495350:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

