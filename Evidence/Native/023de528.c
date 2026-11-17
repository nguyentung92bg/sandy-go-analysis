/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$MakeGrain
UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__MakeGrain (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$MakeGrain
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__MakeGrain (const MethodInfo* method); */

void Dino_BusSand_App_UI_AtelierArt__MakeGrain_22de528(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar6 = PTR_DAT_04cb7130;
  puVar5 = PTR_DAT_04cb6a60;
  if ((bRam0000000004f9c3fd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cb7130);
    bRam0000000004f9c3fd = 1;
  }
  plVar10 = (long *)Dino_BusSand_App_UI_AtelierArt__Tex_22de70c(0x18,0x18,*(undefined8 *)puVar6);
  lVar11 = FUN_02133068(*(undefined8 *)puVar5,0x240);
  fVar4 = _UNK_00e20840;
  fVar3 = _UNK_00e20590;
  fVar2 = _UNK_00e1fde8;
  lVar12 = 0;
  lVar13 = 0;
  lVar14 = lVar11 + 0x20;
  do {
    lVar15 = 0;
    fVar19 = (float)(int)lVar13 + 0.5 + -12.0;
    do {
      fVar20 = (float)(int)lVar15 + 0.5 + -12.0;
      fVar16 = (float)Dino_BusSand_App_UI_AtelierArt__Box_22de880
                                (fVar20,fVar19,0x41180000,0x41080000,0x40b00000);
      if (0.0 < fVar16) {
        fVar18 = (fVar19 - fVar20) * fVar4 + fVar2;
        fVar1 = 1.0;
        if (fVar18 <= 1.0) {
          fVar1 = fVar18;
        }
        fVar17 = 0.0;
        if (0.0 <= fVar18) {
          fVar17 = fVar1;
        }
        fVar20 = (float)expf(((fVar19 + -3.0) * (fVar19 + -3.0) + (fVar20 + 3.5) * (fVar20 + 3.5)) /
                             -6.0);
        fVar17 = fVar17 + fVar20 * fVar3;
        fVar20 = 1.0;
        if (fVar17 <= 1.0) {
          fVar20 = fVar17;
        }
        uVar7 = FUN_023e4c88(fVar20,fVar20,fVar20,fVar16,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((ulong)*(uint *)(lVar11 + 0x18) <= (ulong)(lVar12 + lVar15)) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined4 *)(lVar14 + lVar15 * 4) = uVar7;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x18);
    lVar13 = lVar13 + 1;
    lVar12 = lVar12 + 0x18;
    lVar14 = lVar14 + 0x60;
    if (lVar13 == 0x18) {
      if (plVar10 != (long *)0x0) {
        UnityEngine_Texture2D__SetPixels32_439edd8(plVar10,lVar11,0);
        UnityEngine_Texture2D__Apply_439ea14(plVar10,0,1,0);
        iVar8 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
        iVar9 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
        UnityEngine_Sprite__Create_4351088
                  (0,0,(float)iVar8,(float)iVar9,0x3f000000,0x3f000000,0x42c80000,plVar10,0,0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0,lVar11);
    }
  } while( true );
}

