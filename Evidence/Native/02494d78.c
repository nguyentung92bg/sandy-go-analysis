/* IL2CPP: Dino.BusSand.View.ChainRig$$TrailAt
void Dino_BusSand_View_ChainRig__TrailAt (Dino_BusSand_View_ChainRig_Hitch_o* h, float s, UnityEngine_Vector3_o* pos, float* yaw, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.ChainRig$$TrailAt
   void Dino_BusSand_View_ChainRig__TrailAt (Dino_BusSand_View_ChainRig_Hitch_o* h, float s,
   UnityEngine_Vector3_o* pos, float* yaw, const MethodInfo* method); */

void Dino_BusSand_View_ChainRig__TrailAt_2394d78
               (float param_1,float param_2,undefined8 param_3,long param_4,float *param_5,
               float *param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
                    /* try { // try from 02494d7c to 02594d7f has its CatchHandler @ 02494f34 */
                    /* try { // try from 02494d80 to 02594e77 has its CatchHandler @ 02494ac4 */
  if ((bRam0000000004f9c8d4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04caea30);
    bRam0000000004f9c8d4 = 1;
  }
  puVar3 = PTR_DAT_04caea30;
  puVar2 = PTR_DAT_04caa1a8;
  fVar12 = (float)param_3;
  if ((param_4 == 0) || (lVar8 = *(long *)(param_4 + 0x68), lVar8 == 0)) goto LAB_02495058;
  iVar1 = *(int *)(lVar8 + 0x18);
  lVar6 = *(long *)(param_4 + 0x78);
  iVar4 = iVar1 + -1;
  if (iVar4 == 0) {
LAB_02494e80:
    fVar11 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                              (lVar8,0,*(undefined8 *)puVar2);
    *param_5 = fVar11;
    param_5[1] = param_2;
    param_5[2] = fVar12;
    if (lVar6 == 0) {
LAB_02495058:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = *(undefined8 *)puVar3;
    iVar4 = 0;
  }
  else {
    lVar9 = *(long *)(param_4 + 0x70);
    if (lVar9 == 0) goto LAB_02495058;
    fVar11 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                              (lVar9,0,*(undefined8 *)PTR_DAT_04caea30);
    fVar12 = (float)param_3;
    if (param_1 <= fVar11) goto LAB_02494e80;
    fVar12 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                              (lVar9,iVar4,*(undefined8 *)puVar3);
    fVar11 = (float)param_3;
    if (param_1 < fVar12) {
      if (iVar4 < 2) {
        iVar7 = 1;
      }
      else {
        iVar10 = 2;
        do {
          fVar12 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                                    (lVar9,iVar10 + -1,*(undefined8 *)puVar3);
          fVar11 = (float)param_3;
          iVar7 = iVar10 + -1;
          if (param_1 <= fVar12) break;
          iVar10 = iVar10 + 1;
          iVar7 = iVar4;
                    /* try { // try from 02494e78 to 02594e7f has its CatchHandler @ 02494f98 */
        } while (iVar1 != iVar10);
      }
                    /* try { // try from 02494f18 to 02594f1b has its CatchHandler @ 02494f9c */
                    /* try { // try from 02494f1c to 02594f1f has its CatchHandler @ 02494f50 */
      fVar12 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                                (lVar9,iVar7,*(undefined8 *)puVar3);
                    /* try { // try from 02494f20 to 02594f27 has its CatchHandler @ 02494f4c */
      iVar1 = iVar7 + -1;
                    /* try { // try from 02494f28 to 02594f3b has its CatchHandler @ 02494ac4 */
                    /* catch() { ... } // from try @ 02494d7c with catch @ 02494f34 */
      fVar13 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                                (lVar9,iVar1,*(undefined8 *)puVar3);
                    /* try { // try from 02494f3c to 02594f43 has its CatchHandler @ 02494ff0 */
                    /* try { // try from 02494f44 to 02594f7f has its CatchHandler @ 02494ac4 */
                    /* catch() { ... } // from try @ 02494ed4 with catch @ 02494f48 */
      fVar14 = 0.0;
                    /* catch() { ... } // from try @ 02494f20 with catch @ 02494f4c */
                    /* catch() { ... } // from try @ 02494f1c with catch @ 02494f50 */
      if (_UNK_00e20900 < fVar12 - fVar13) {
                    /* catch() { ... } // from try @ 02494d3c with catch @ 02494f54 */
                    /* catch() { ... } // from try @ 02494cc8 with catch @ 02494f58 */
                    /* catch() { ... } // from try @ 02494cbc with catch @ 02494f5c */
                    /* catch() { ... } // from try @ 02494cac with catch @ 02494f60 */
        fVar14 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                                  (lVar9,iVar1,*(undefined8 *)puVar3);
        fVar14 = (param_1 - fVar14) / (fVar12 - fVar13);
      }
      fVar15 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (lVar8,iVar1,*(undefined8 *)puVar2);
      fVar12 = param_2;
      fVar17 = fVar11;
                    /* try { // try from 02494f80 to 02594f83 has its CatchHandler @ 02494f88 */
                    /* catch() { ... } // from try @ 02494f80 with catch @ 02494f88 */
                    /* try { // try from 02494f8c to 02594f93 has its CatchHandler @ 02494ff0 */
                    /* try { // try from 02494f94 to 02594fb7 has its CatchHandler @ 02494ac4 */
      fVar16 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (lVar8,iVar7,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 02494e78 with catch @ 02494f98 */
                    /* catch() { ... } // from try @ 02494f18 with catch @ 02494f9c */
      fVar13 = 1.0;
      if (fVar14 <= 1.0) {
        fVar13 = fVar14;
      }
      fVar18 = 0.0;
      if (0.0 <= fVar14) {
        fVar18 = fVar13;
      }
                    /* try { // try from 02494fb8 to 02594fbb has its CatchHandler @ 02494fdc */
                    /* try { // try from 02494fbc to 02594fdf has its CatchHandler @ 02494ac4 */
      *param_5 = fVar15 + fVar18 * (fVar16 - fVar15);
      param_5[1] = param_2 + fVar18 * (fVar12 - param_2);
      param_5[2] = fVar11 + fVar18 * (fVar17 - fVar11);
      if (lVar6 == 0) goto LAB_02495058;
                    /* catch() { ... } // from try @ 02494fb8 with catch @ 02494fdc */
                    /* try { // try from 02494fe0 to 02594fe7 has its CatchHandler @ 02494ff0 */
                    /* try { // try from 02494fe8 to 02594ff3 has its CatchHandler @ 02494ac4 */
      fVar11 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                                (lVar6,iVar1,*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 02494f3c with catch @ 02494ff0
                       catch() { ... } // from try @ 02494f8c with catch @ 02494ff0
                       catch() { ... } // from try @ 02494fe0 with catch @ 02494ff0 */
      fVar12 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                                (lVar6,iVar7,*(undefined8 *)puVar3);
      fVar13 = (fVar12 - fVar11) + (float)(int)((fVar12 - fVar11) / 360.0) * -360.0;
      fVar12 = 360.0;
      if (fVar13 <= 360.0) {
        fVar12 = fVar13;
      }
      fVar14 = 0.0;
      if (0.0 <= fVar13) {
        fVar14 = fVar12;
      }
      fVar12 = fVar14 + -360.0;
      if (fVar14 <= 180.0) {
        fVar12 = fVar14;
      }
      fVar11 = fVar11 + fVar18 * fVar12;
      goto LAB_02494eac;
    }
                    /* try { // try from 02494edc to 02594f17 has its CatchHandler @ 02494ac4 */
    fVar12 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                              (lVar8,iVar4,*(undefined8 *)puVar2);
    *param_5 = fVar12;
    param_5[1] = param_2;
    param_5[2] = fVar11;
    if (lVar6 == 0) goto LAB_02495058;
    uVar5 = *(undefined8 *)puVar3;
  }
  fVar11 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4(lVar6,iVar4,uVar5);
LAB_02494eac:
  *param_6 = fVar11;
                    /* try { // try from 02494ed4 to 02594edb has its CatchHandler @ 02494f48 */
  return;
}

