/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$MakeShadow
UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__MakeShadow (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$MakeShadow
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__MakeShadow (const MethodInfo* method); */

void Dino_BusSand_App_UI_AtelierArt__MakeShadow_22ddfe0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dStack_a8;
  
  puVar3 = PTR_DAT_04cb7120;
  puVar2 = PTR_DAT_04cb6a60;
  if ((bRam0000000004f9c3fc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cb7120);
    bRam0000000004f9c3fc = 1;
  }
  plVar6 = (long *)Dino_BusSand_App_UI_AtelierArt__Tex_22de70c(0x40,0x40,*(undefined8 *)puVar3);
  lVar7 = FUN_02133068(*(undefined8 *)puVar2,0x1000);
  puVar2 = PTR_DAT_04caa200;
  lVar8 = 0;
  lVar9 = 0;
  lVar10 = lVar7 + 0x20;
  cVar11 = cRam0000000004f9b891;
  do {
    lVar12 = 0;
    fVar13 = ABS((float)(int)lVar9 + 0.5 + -32.0) + -4.0;
    fVar14 = 0.0;
    if (0.0 <= fVar13) {
      fVar14 = fVar13;
    }
    do {
      fVar15 = ABS((float)(int)lVar12 + 0.5 + -32.0) + -4.0;
      fVar13 = 0.0;
      if (0.0 <= fVar15) {
        fVar13 = fVar15;
      }
      fVar13 = SQRT(fVar14 * fVar14 + fVar13 * fVar13);
      fVar13 = (float)expf((fVar13 * fVar13) / -162.0);
      if (cVar11 == '\0') {
        FUN_02132f7c(puVar2);
        cVar11 = '\x01';
        cRam0000000004f9b891 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        cVar11 = cRam0000000004f9b891;
      }
      dVar17 = (double)(fVar13 * 255.0);
      dVar16 = (double)FUN_049b52f0(dVar17,&dStack_a8);
      if (0.0 <= fVar13 * 255.0) {
        if (dVar16 == 0.5) {
          dVar16 = 1.0;
          goto LAB_023de184;
        }
        dVar17 = (double)(long)(dVar17 + 0.5);
      }
      else if (dVar16 == -0.5) {
        dVar16 = -1.0;
LAB_023de184:
        dVar17 = dStack_a8;
        if (((long)dStack_a8 & 1U) != 0) {
          dVar17 = dStack_a8 + dVar16;
        }
      }
      else {
        dVar17 = (double)(long)(dVar17 + -0.5);
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((ulong)*(uint *)(lVar7 + 0x18) <= (ulong)(lVar8 + lVar12)) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar1 = 0xffffff;
      if (dVar17 != INFINITY) {
        uVar1 = (int)dVar17 << 0x18 | 0xffffff;
      }
      *(uint *)(lVar10 + lVar12 * 4) = uVar1;
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0x40);
    lVar9 = lVar9 + 1;
    lVar8 = lVar8 + 0x40;
    lVar10 = lVar10 + 0x100;
    if (lVar9 == 0x40) {
      if (plVar6 != (long *)0x0) {
        UnityEngine_Texture2D__SetPixels32_439edd8(plVar6,lVar7,0);
        UnityEngine_Texture2D__Apply_439ea14(plVar6,0,1,0);
        iVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
        iVar5 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
        UnityEngine_Sprite__Create_4351088
                  (0,0,(float)iVar4,(float)iVar5,0x3f000000,0x3f000000,0x42c80000,plVar6,0,0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0,lVar7);
    }
  } while( true );
}

