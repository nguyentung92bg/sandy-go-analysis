/* IL2CPP: Dino.BusSand.View.GameView$$Accent
UnityEngine_Color32_o Dino_BusSand_View_GameView__Accent (UnityEngine_Color32_o main, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$Accent
   UnityEngine_Color32_o Dino_BusSand_View_GameView__Accent (UnityEngine_Color32_o main, int32_t i,
   const MethodInfo* method); */

undefined4 Dino_BusSand_View_GameView__Accent_23a9a30(ulong param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_78;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c947 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c947 = 1;
  }
  puVar2 = PTR_DAT_04cb2870;
  uVar6 = (uint)param_1;
  uStack_48 = 0;
  uStack_78 = 0;
                    /* try { // try from 024a9ac4 to 025a9acb has its CatchHandler @ 024aaaf8 */
  UnityEngine_Color__RGBToHSV_43aa290
            ((float)(uVar6 & 0xff) / 255.0,(float)(uVar6 >> 8 & 0xff) / 255.0,
             (float)(uVar6 >> 0x10 & 0xff) / 255.0,(float)(param_1 >> 0x18 & 0xff) / 255.0,
             (long)&uStack_48 + 4,&uStack_48,(long)&uStack_78 + 4,0);
  uVar8 = 0;
                    /* try { // try from 024a9ad8 to 025a9adf has its CatchHandler @ 024aaa34 */
  uVar7 = 0;
  uVar6 = 0;
  fVar12 = -1.0;
  fVar13 = -1.0;
  do {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x78);
    if (lVar5 == 0) {
LAB_024a9c80:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 024a9b18 to 025a9b23 has its CatchHandler @ 024aaad8 */
    if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar8) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
        if (lVar5 == 0) goto LAB_024a9c80;
      }
      if ((param_2 & 1) != 0) {
        uVar6 = uVar7;
      }
      if (uVar6 < *(uint *)(lVar5 + 0x18)) {
                    /* try { // try from 024a9c54 to 025a9c57 has its CatchHandler @ 024aab00 */
                    /* try { // try from 024a9c64 to 025a9c8f has its CatchHandler @ 024aaa04 */
        return *(undefined4 *)(lVar5 + (long)(int)uVar6 * 4 + 0x20);
      }
LAB_024a9c84:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
                    /* try { // try from 024a9b3c to 025a9b53 has its CatchHandler @ 024aaad4 */
      if (lVar5 == 0) goto LAB_024a9c80;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_024a9c84;
    uVar1 = *(uint *)(lVar5 + uVar8 * 4 + 0x20);
                    /* try { // try from 024a9b68 to 025a9b6b has its CatchHandler @ 024aaa64 */
    UnityEngine_Color__RGBToHSV_43aa290
              ((float)(uVar1 & 0xff) / 255.0,(float)(uVar1 >> 8 & 0xff) / 255.0,
               (float)(uVar1 >> 0x10 & 0xff) / 255.0,(float)(uVar1 >> 0x18) / 255.0,&uStack_78,
               (long)&uStack_78 + 4,&uStack_48,0);
    fVar9 = (float)uStack_78 * 360.0 + uStack_48._4_4_ * -360.0;
    fVar9 = fVar9 + (float)(int)(fVar9 / 360.0) * -360.0;
    fVar11 = 360.0;
    if (fVar9 <= 360.0) {
      fVar11 = fVar9;
    }
                    /* try { // try from 024a9bcc to 025a9bdf has its CatchHandler @ 024aab00 */
    fVar10 = 0.0;
    if (0.0 <= fVar9) {
      fVar10 = fVar11;
    }
    fVar11 = fVar10 + -360.0;
    if (fVar10 <= 180.0) {
      fVar11 = fVar10;
    }
    fVar11 = ABS(fVar11);
                    /* try { // try from 024a9bec to 025a9bf3 has its CatchHandler @ 024aaa0c */
    fVar9 = fVar11;
    uVar1 = uVar6;
    uVar3 = (uint)uVar8;
                    /* try { // try from 024a9c04 to 025a9c07 has its CatchHandler @ 024aa9e4 */
    if ((fVar11 <= fVar13) &&
       (fVar9 = fVar13, uVar1 = uVar7, uVar3 = uVar6, fVar13 = fVar12, fVar12 < fVar11)) {
      uVar1 = (uint)uVar8;
      fVar13 = fVar11;
                    /* try { // try from 024a9c08 to 025a9c17 has its CatchHandler @ 024aaa08 */
    }
    fVar12 = fVar13;
    uVar6 = uVar3;
    uVar7 = uVar1;
                    /* try { // try from 024a9c20 to 025a9c27 has its CatchHandler @ 024aa9f0 */
    uVar8 = uVar8 + 1;
    fVar13 = fVar9;
  } while( true );
}

