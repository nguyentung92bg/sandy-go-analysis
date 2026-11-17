/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$CoinPillOverlaps
bool Dino_BusSand_App_UI_HudPanel__CoinPillOverlaps (Dino_BusSand_App_UI_HudPanel_o* __this, UnityEngine_Vector2_o centre, UnityEngine_Vector2_o size, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$CoinPillOverlaps
   bool Dino_BusSand_App_UI_HudPanel__CoinPillOverlaps (Dino_BusSand_App_UI_HudPanel_o* __this,
   UnityEngine_Vector2_o centre, UnityEngine_Vector2_o size, const MethodInfo* method); */

bool Dino_BusSand_App_UI_HudPanel__CoinPillOverlaps_230d13c
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c51e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad9d0);
    bRam0000000004f9c51e = 1;
  }
  uVar7 = *(undefined8 *)(param_5 + 0x120);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_5 + 0x100);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_5 + 0x100) == 0) goto LAB_0240d394;
      plVar4 = (long *)UnityEngine_Transform__Find_43d4bec
                                 (*(long *)(param_5 + 0x100),*(undefined8 *)PTR_DAT_04cad9d0,0);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        *(undefined8 *)(param_5 + 0x120) = 0;
      }
      else {
        lVar6 = *(long *)PTR_DAT_04cabdb0;
        plVar1 = plVar4;
        if (*plVar4 != lVar6) {
          plVar1 = (long *)0x0;
        }
        *(long **)(param_5 + 0x120) = plVar1;
        if (*plVar4 != lVar6) {
          plVar4 = (long *)0x0;
        }
      }
      thunk_FUN_02134474(param_5 + 0x120,plVar4);
    }
  }
  lVar6 = *(long *)(param_5 + 0x120);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  puVar2 = PTR_DAT_04cb6a88;
  if ((uVar3 & 1) != 0) {
    return false;
  }
  lVar5 = *(long *)PTR_DAT_04cb6a88;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  if (lVar6 != 0) {
    lVar5 = **(long **)(lVar5 + 0xb8);
    UnityEngine_RectTransform__GetWorldCorners_43d0720(lVar6,lVar5,0);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0240d398:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if (*(long *)(param_5 + 0x58) != 0) {
        fVar10 = *(float *)(lVar5 + 0x24);
        fVar8 = (float)UnityEngine_Transform__InverseTransformPoint_43d3ffc
                                 (*(undefined4 *)(lVar5 + 0x20),fVar10,*(undefined4 *)(lVar5 + 0x28)
                                  ,*(long *)(param_5 + 0x58),0);
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_0240d398;
        if (*(long *)(param_5 + 0x58) != 0) {
          fVar11 = *(float *)(lVar5 + 0x3c);
          fVar9 = (float)UnityEngine_Transform__InverseTransformPoint_43d3ffc
                                   (*(undefined4 *)(lVar5 + 0x38),fVar11,
                                    *(undefined4 *)(lVar5 + 0x40),*(long *)(param_5 + 0x58),0);
          param_1 = param_1 - param_3 * 0.5;
          fVar8 = fVar8 + -8.0;
          if (param_3 + param_1 <= fVar8) {
            return false;
          }
          if (fVar8 + ((fVar9 + 8.0) - fVar8) <= param_1) {
            return false;
          }
          fVar10 = fVar10 + -8.0;
          param_2 = param_2 - param_4 * 0.5;
          if (fVar10 + ((fVar11 + 8.0) - fVar10) <= param_2) {
            return false;
          }
                    /* try { // try from 0240d370 to 0250d443 has its CatchHandler @ 0240d370
                       catch() { ... } // from try @ 0240d370 with catch @ 0240d370
                       catch() { ... } // from try @ 0240d47c with catch @ 0240d370
                       catch() { ... } // from try @ 0240d4c8 with catch @ 0240d370
                       catch() { ... } // from try @ 0240d4ec with catch @ 0240d370 */
          return fVar10 < param_4 + param_2;
        }
      }
    }
  }
LAB_0240d394:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

