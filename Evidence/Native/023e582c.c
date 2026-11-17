/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$MakeTexture
UnityEngine_Texture2D_o* Dino_BusSand_App_UI_HomePuffs__MakeTexture (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$MakeTexture
   UnityEngine_Texture2D_o* Dino_BusSand_App_UI_HomePuffs__MakeTexture (const MethodInfo* method);
    */

long Dino_BusSand_App_UI_HomePuffs__MakeTexture_22e582c(void)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dStack_a8;
  
  puVar6 = PTR_DAT_04cb4ef0;
  if ((bRam0000000004f9c424 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cb72c8);
    bRam0000000004f9c424 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  UnityEngine_Texture2D___ctor_439e07c(lVar7,0x40,0x40,4,0,0);
  puVar6 = PTR_DAT_04cb6a60;
  if (lVar7 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar7,*(undefined8 *)PTR_DAT_04cb72c8,0);
    UnityEngine_Texture__set_wrapMode_4398ac8(lVar7,1,0);
    UnityEngine_Texture__set_filterMode_4398f60(lVar7,1,0);
    lVar8 = FUN_02133068(*(undefined8 *)puVar6,0x1000);
    puVar6 = PTR_DAT_04caa200;
    fVar5 = _UNK_00e20a94;
    fVar4 = _UNK_00e20838;
    fVar3 = _UNK_00e2043c;
    uVar2 = _UNK_00e20188;
    lVar9 = 0;
    lVar10 = 0;
    lVar11 = lVar8 + 0x20;
    cVar12 = cRam0000000004f9b891;
    do {
      lVar13 = 0;
      fVar14 = ((float)(int)lVar10 + 0.5) * 0.015625;
      fVar14 = fVar14 + fVar14 + -1.0;
      do {
        fVar15 = ((float)(int)lVar13 + 0.5) * 0.015625;
        fVar18 = fVar15 + fVar15 + -1.0;
        fVar15 = (float)atan2f(fVar14,fVar18);
        fVar16 = (float)func_0x049b5320(fVar15 * 5.0);
        fVar15 = (float)func_0x049b5320(fVar15 * 3.0 + fVar4);
        fVar15 = SQRT(fVar14 * fVar14 + fVar18 * fVar18) * (fVar16 * fVar5 + 1.0 + fVar15 * fVar3);
        fVar16 = 1.0 - fVar15 * fVar15;
        fVar15 = 1.0;
        if (fVar16 <= 1.0) {
          fVar15 = fVar16;
        }
        fVar18 = 0.0;
        if (0.0 <= fVar16) {
          fVar18 = fVar15;
        }
        fVar15 = (float)func_0x049b5300(fVar18,uVar2);
        if (cVar12 == '\0') {
          FUN_02132f7c(puVar6);
          cVar12 = '\x01';
          cRam0000000004f9b891 = '\x01';
        }
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          cVar12 = cRam0000000004f9b891;
        }
        dVar19 = (double)(fVar15 * 255.0);
        dVar17 = (double)FUN_049b52f0(dVar19,&dStack_a8);
        if (0.0 <= fVar15 * 255.0) {
          if (dVar17 == 0.5) {
            dVar17 = 1.0;
            goto LAB_023e5aac;
          }
          dVar19 = (double)(long)(dVar19 + 0.5);
        }
        else if (dVar17 == -0.5) {
          dVar17 = -1.0;
LAB_023e5aac:
          dVar19 = dStack_a8;
          if (((long)dStack_a8 & 1U) != 0) {
            dVar19 = dStack_a8 + dVar17;
          }
        }
        else {
          dVar19 = (double)(long)(dVar19 + -0.5);
        }
        if (lVar8 == 0) goto LAB_023e5b80;
        if ((ulong)*(uint *)(lVar8 + 0x18) <= (ulong)(lVar9 + lVar13)) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar1 = 0xffffff;
        if (dVar19 != INFINITY) {
          uVar1 = (int)dVar19 << 0x18 | 0xffffff;
        }
        *(uint *)(lVar11 + lVar13 * 4) = uVar1;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x40);
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x40;
      lVar11 = lVar11 + 0x100;
      if (lVar10 == 0x40) {
        UnityEngine_Texture2D__SetPixels32_439edd8(lVar7,lVar8,0);
        UnityEngine_Texture2D__Apply_439ea14(lVar7,0,1,0);
        return lVar7;
      }
    } while( true );
  }
LAB_023e5b80:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

