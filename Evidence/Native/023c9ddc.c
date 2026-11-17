/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$MakeHoleTexture
UnityEngine_Texture2D_o* Dino_BusSand_App_UI_GuidePanel__MakeHoleTexture (float innerRatio, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$MakeHoleTexture
   UnityEngine_Texture2D_o* Dino_BusSand_App_UI_GuidePanel__MakeHoleTexture (float innerRatio, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_GuidePanel__MakeHoleTexture_22c9ddc(float param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double dStack_58;
  
  puVar2 = PTR_DAT_04cb4ef0;
  if ((bRam0000000004f9c36f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cb6a68);
    bRam0000000004f9c36f = 1;
  }
  fVar9 = _UNK_00e209a8;
  if (param_1 <= _UNK_00e209a8) {
    fVar9 = param_1;
  }
  fVar15 = 0.0;
  if (0.0 <= param_1) {
    fVar15 = fVar9;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  UnityEngine_Texture2D___ctor_439e07c(lVar3,0x80,0x80,4,0,0);
  puVar2 = PTR_DAT_04cb6a60;
  if (lVar3 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar3,*(undefined8 *)PTR_DAT_04cb6a68,0);
    UnityEngine_Texture__set_wrapMode_4398ac8(lVar3,1,0);
    UnityEngine_Texture__set_filterMode_4398f60(lVar3,1,0);
    lVar4 = FUN_02133068(*(undefined8 *)puVar2,0x4000);
    puVar2 = PTR_DAT_04caa200;
    lVar5 = 0;
    lVar6 = 0;
    lVar7 = lVar4 + 0x20;
    do {
      lVar8 = 0;
      fVar9 = ((float)(int)lVar6 + 0.5) * 0.0078125;
      fVar9 = fVar9 + fVar9 + -1.0;
      do {
        fVar11 = 1.0;
        fVar10 = ((float)(int)lVar8 + 0.5) * 0.0078125;
        fVar10 = fVar10 + fVar10 + -1.0;
        fVar10 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
        if ((fVar10 < 1.0) && (fVar11 = 0.0, fVar15 < fVar10)) {
          fVar11 = (fVar10 - fVar15) / (1.0 - fVar15);
          fVar10 = 1.0;
          if (fVar11 <= 1.0) {
            fVar10 = fVar11;
          }
          fVar12 = 0.0;
          if (0.0 <= fVar11) {
            fVar12 = fVar10;
          }
          fVar11 = fVar12 * fVar12 * 3.0 - fVar12 * fVar12 * (fVar12 + fVar12);
          fVar11 = fVar11 + (1.0 - fVar11) * 0.0;
        }
        if (cRam0000000004f9b891 == '\0') {
          FUN_02132f7c(puVar2);
          cRam0000000004f9b891 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        dVar14 = (double)(fVar11 * 255.0);
        dVar13 = (double)FUN_049b52f0(dVar14,&dStack_58);
        if (0.0 <= fVar11 * 255.0) {
          if (dVar13 == 0.5) {
            dVar13 = 1.0;
            goto LAB_023ca02c;
          }
          dVar14 = (double)(long)(dVar14 + 0.5);
        }
        else if (dVar13 == -0.5) {
          dVar13 = -1.0;
LAB_023ca02c:
          dVar14 = dStack_58;
          if (((long)dStack_58 & 1U) != 0) {
            dVar14 = dStack_58 + dVar13;
          }
        }
        else {
          dVar14 = (double)(long)(dVar14 + -0.5);
        }
        if (lVar4 == 0) goto LAB_023ca100;
        if ((ulong)*(uint *)(lVar4 + 0x18) <= (ulong)(lVar5 + lVar8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar1 = 0;
        if (dVar14 != INFINITY) {
          iVar1 = (int)dVar14 << 0x18;
        }
        *(int *)(lVar7 + lVar8 * 4) = iVar1;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x80);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x80;
      lVar7 = lVar7 + 0x200;
      if (lVar6 == 0x80) {
        UnityEngine_Texture2D__SetPixels32_439edd8(lVar3,lVar4,0);
        UnityEngine_Texture2D__Apply_439ea14(lVar3,0,1,0);
        return lVar3;
      }
    } while( true );
  }
LAB_023ca100:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

