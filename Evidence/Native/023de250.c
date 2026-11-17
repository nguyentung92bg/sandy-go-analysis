/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$MakeTwinkle
UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__MakeTwinkle (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$MakeTwinkle
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__MakeTwinkle (const MethodInfo* method); */

void Dino_BusSand_App_UI_AtelierArt__MakeTwinkle_22de250(void)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dStack_a8;
  
  puVar4 = PTR_DAT_04cb7128;
  puVar3 = PTR_DAT_04cb6a60;
  if ((bRam0000000004f9c3fe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cb7128);
    bRam0000000004f9c3fe = 1;
  }
  plVar7 = (long *)Dino_BusSand_App_UI_AtelierArt__Tex_22de70c(0x30,0x30,*(undefined8 *)puVar4);
  lVar8 = FUN_02133068(*(undefined8 *)puVar3,0x900);
  puVar3 = PTR_DAT_04caa200;
  fVar2 = _UNK_00e200f8;
  lVar9 = 0;
  lVar10 = 0;
  lVar11 = lVar8 + 0x20;
  cVar12 = cRam0000000004f9b891;
  do {
    fVar20 = ABS((float)(int)lVar10 + 0.5 + -24.0) / 24.0;
    fVar14 = (float)expf(fVar20 * fVar20 * -60.0);
    fVar15 = (float)expf(fVar20 * -7.0);
    lVar13 = 0;
    do {
      fVar21 = ABS((float)(int)lVar13 + 0.5 + -24.0) / 24.0;
      fVar16 = (float)expf(fVar21 * -7.0);
      fVar17 = (float)expf(fVar21 * fVar21 * -60.0);
      fVar18 = fVar14 * fVar16;
      if (fVar14 * fVar16 <= fVar15 * fVar17) {
        fVar18 = fVar15 * fVar17;
      }
      fVar16 = (float)expf((fVar20 * fVar20 + fVar21 * fVar21) * -18.0);
      fVar18 = fVar16 * fVar2 + fVar18;
      fVar16 = 1.0;
      if (fVar18 <= 1.0) {
        fVar16 = fVar18;
      }
      fVar17 = 0.0;
      if (0.0 <= fVar18) {
        fVar17 = fVar16 * 255.0;
      }
      if (cVar12 == '\0') {
        FUN_02132f7c(puVar3);
        cVar12 = '\x01';
        cRam0000000004f9b891 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        cVar12 = cRam0000000004f9b891;
      }
      dVar22 = (double)fVar17;
      dVar19 = (double)FUN_049b52f0(dVar22,&dStack_a8);
      if (0.0 <= fVar17) {
        if (dVar19 == 0.5) {
          dVar19 = 1.0;
          goto LAB_023de45c;
        }
        dVar22 = (double)(long)(dVar22 + 0.5);
      }
      else if (dVar19 == -0.5) {
        dVar19 = -1.0;
LAB_023de45c:
        dVar22 = dStack_a8;
        if (((long)dStack_a8 & 1U) != 0) {
          dVar22 = dStack_a8 + dVar19;
        }
      }
      else {
        dVar22 = (double)(long)(dVar22 + -0.5);
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((ulong)*(uint *)(lVar8 + 0x18) <= (ulong)(lVar9 + lVar13)) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar1 = 0xffffff;
      if (dVar22 != INFINITY) {
        uVar1 = (int)dVar22 << 0x18 | 0xffffff;
      }
      *(uint *)(lVar11 + lVar13 * 4) = uVar1;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x30);
    lVar10 = lVar10 + 1;
    lVar9 = lVar9 + 0x30;
    lVar11 = lVar11 + 0xc0;
    if (lVar10 == 0x30) {
      if (plVar7 != (long *)0x0) {
        UnityEngine_Texture2D__SetPixels32_439edd8(plVar7,lVar8,0);
        UnityEngine_Texture2D__Apply_439ea14(plVar7,0,1,0);
        iVar5 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
        iVar6 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
        UnityEngine_Sprite__Create_4351088
                  (0,0,(float)iVar5,(float)iVar6,0x3f000000,0x3f000000,0x42c80000,plVar7,0,0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0,lVar8);
    }
  } while( true );
}

