/* IL2CPP: Dino.BusSand.View.GameView$$FireColor
UnityEngine_Color32_o Dino_BusSand_View_GameView__FireColor (uint8_t c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$FireColor
   UnityEngine_Color32_o Dino_BusSand_View_GameView__FireColor (uint8_t c, const MethodInfo*
   method); */

uint Dino_BusSand_View_GameView__FireColor_23a91ac
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,ulong param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  double unaff_x19;
  long lVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((bRam0000000004f9c945 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9c945 = 1;
  }
  uVar4 = Dino_BusSand_View_ArtPack__get_Active_238dea0();
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04cbbfb8;
    if ((bRam0000000004f9cb83 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbbfb8,0);
      bRam0000000004f9cb83 = 1;
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar1;
    }
    if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x30) == '\0') {
      uVar4 = 0;
      lVar7 = 0x100000000;
      while( true ) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar1;
        }
        lVar6 = *(long *)(lVar5 + 0xb8);
        if (*(long *)(lVar6 + 8) == 0) goto LAB_02519860;
        if ((long)*(int *)(*(long *)(lVar6 + 8) + 0x18) <= (long)uVar4) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar1;
            lVar6 = *(long *)(lVar5 + 0xb8);
          }
          *(undefined1 *)(lVar6 + 0x30) = 1;
          goto LAB_02519808;
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
        }
        lVar5 = *(long *)(lVar6 + 0x18);
        if (lVar5 == 0) goto LAB_02519860;
        if (*(uint *)(lVar5 + 0x18) <= uVar4) break;
        lVar6 = *(long *)(lVar6 + 0x28);
        uVar2 = Dino_BusSand_Core_LevelData__ParseHex_2410b28
                          (*(undefined8 *)(lVar5 + uVar4 * 8 + 0x20),0);
        if (lVar6 == 0) goto LAB_02519860;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) break;
        lVar5 = lVar7 >> 0x1e;
        lVar7 = lVar7 + 0x100000000;
        *(undefined4 *)(lVar6 + lVar5 + 0x20) = uVar2;
        lVar5 = *(long *)puVar1;
      }
LAB_02519864:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
LAB_02519808:
    if (((uint)param_5 & 0xff) < 0x41) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
      if (lVar5 == 0) {
LAB_02519860:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(uint *)(lVar5 + 0x18) <= ((uint)param_5 & 0xff)) goto LAB_02519864;
      uVar3 = *(uint *)(lVar5 + (param_5 & 0xff) * 4 + 0x20);
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar8 = (float)Dino_BusSand_View_PackPalette__Main_2390528(param_5 & 0xffffffff);
  fVar10 = 1.0;
  if (fVar8 <= 1.0) {
    fVar10 = fVar8;
  }
  fVar13 = 0.0;
  if (0.0 <= fVar8) {
    fVar13 = fVar10 * 255.0;
  }
  dVar9 = (double)FUN_049b52f0((double)fVar13,&stack0xfffffffffffffff8);
  if (0.0 <= fVar13) {
    if (dVar9 == 0.5) {
      fVar10 = 1.0;
      goto LAB_023e4d08;
    }
    fVar8 = (float)(int)(fVar13 + 0.5);
  }
  else if (dVar9 == -0.5) {
    fVar10 = -1.0;
LAB_023e4d08:
    fVar8 = (float)unaff_x19;
    if (((long)unaff_x19 & 1U) != 0) {
      fVar8 = (float)unaff_x19 + fVar10;
    }
  }
  else {
    fVar8 = (float)(int)(fVar13 + -0.5);
  }
  fVar10 = 1.0;
  if (param_2 <= 1.0) {
    fVar10 = param_2;
  }
  fVar13 = 0.0;
  if (0.0 <= param_2) {
    fVar13 = fVar10 * 255.0;
  }
  dVar9 = (double)FUN_049b52f0((double)fVar13,&stack0xfffffffffffffff8);
  if (0.0 <= fVar13) {
    if (dVar9 == 0.5) {
      fVar10 = 1.0;
      goto LAB_023e4da0;
    }
    fVar13 = (float)(int)(fVar13 + 0.5);
  }
  else if (dVar9 == -0.5) {
    fVar10 = -1.0;
LAB_023e4da0:
    fVar13 = (float)unaff_x19;
    if (((long)unaff_x19 & 1U) != 0) {
      fVar13 = (float)unaff_x19 + fVar10;
    }
  }
  else {
    fVar13 = (float)(int)(fVar13 + -0.5);
  }
  fVar10 = 1.0;
  if (param_3 <= 1.0) {
    fVar10 = param_3;
  }
  fVar12 = 0.0;
  if (0.0 <= param_3) {
    fVar12 = fVar10 * 255.0;
  }
  dVar9 = (double)FUN_049b52f0((double)fVar12,&stack0xfffffffffffffff8);
  if (0.0 <= fVar12) {
    if (dVar9 == 0.5) {
      fVar10 = 1.0;
      goto LAB_023e4e3c;
    }
    fVar12 = (float)(int)(fVar12 + 0.5);
  }
  else if (dVar9 == -0.5) {
    fVar10 = -1.0;
LAB_023e4e3c:
    fVar12 = (float)unaff_x19;
    if (((long)unaff_x19 & 1U) != 0) {
      fVar12 = (float)unaff_x19 + fVar10;
    }
  }
  else {
    fVar12 = (float)(int)(fVar12 + -0.5);
  }
  fVar10 = 1.0;
  if (param_4 <= 1.0) {
    fVar10 = param_4;
  }
  fVar11 = 0.0;
  if (0.0 <= param_4) {
    fVar11 = fVar10 * 255.0;
  }
  dVar9 = (double)FUN_049b52f0((double)fVar11,&stack0xfffffffffffffff8);
  if (0.0 <= fVar11) {
    if (dVar9 != 0.5) {
      fVar10 = (float)(int)(fVar11 + 0.5);
      goto LAB_023e4f0c;
    }
    fVar11 = 1.0;
  }
  else {
    if (dVar9 != -0.5) {
      fVar10 = (float)(int)(fVar11 + -0.5);
      goto LAB_023e4f0c;
    }
    fVar11 = -1.0;
  }
  fVar10 = (float)unaff_x19;
  if (((long)unaff_x19 & 1U) != 0) {
    fVar10 = (float)unaff_x19 + fVar11;
  }
LAB_023e4f0c:
  uVar4 = NEON_ushl(CONCAT44((int)fVar13,(int)fVar12),_UNK_00e69a20,4);
  return (uint)(uVar4 & 0xff0000ff0000) | (int)fVar10 << 0x18 | (int)fVar8 & 0xffU |
         (uint)((uVar4 & 0xff0000ff0000) >> 0x20);
}

