/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Sheen
void Dino_BusSand_App_UI_HomeAtelier__Sheen (Dino_BusSand_App_UI_HomeAtelier_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Sheen
   void Dino_BusSand_App_UI_HomeAtelier__Sheen (Dino_BusSand_App_UI_HomeAtelier_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__Sheen_22d8618(float param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  double dVar10;
  
  if ((bRam0000000004f9c3d5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6fe0);
    bRam0000000004f9c3d5 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = Dino_BusSand_App_UI_HomeAtelier__Find_22d75bc(param_2,*(undefined4 *)(param_2 + 0x58));
  if ((((*(char *)(param_2 + 0xf8) != '\0') || (*(char *)(param_2 + 0xd4) != '\0')) ||
      (_UNK_00e2043c <= *(float *)(param_2 + 0xb0))) || (lVar3 == 0)) {
    fVar8 = *(float *)(param_2 + 0x11c);
    uVar4 = 0;
LAB_023d8690:
    if (0.0 <= fVar8) goto LAB_023d8698;
  }
  else {
    uVar6 = *(undefined8 *)(lVar3 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    fVar8 = *(float *)(param_2 + 0x11c);
    if (((uVar4 & 1) == 0) || (0.0 <= fVar8)) goto LAB_023d8690;
    if (*(float *)(param_2 + 0xec) < *(float *)(param_2 + 0x118)) {
      uVar4 = 1;
      goto LAB_023d8690;
    }
    fVar8 = 0.0;
    *(undefined4 *)(param_2 + 0x11c) = 0;
    uVar4 = 1;
LAB_023d8698:
    fVar8 = param_1 / _UNK_00e1fea8 + fVar8;
    *(float *)(param_2 + 0x11c) = fVar8;
    if (((uVar4 & 1) == 0) || (1.0 <= fVar8)) {
      plVar5 = *(long **)(param_2 + 0xf0);
      *(undefined4 *)(param_2 + 0x11c) = 0xbf800000;
      if (plVar5 == (long *)0x0) goto LAB_023d87e8;
      fVar8 = *(float *)(param_2 + 0xec);
      dVar10 = (double)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      *(float *)(param_2 + 0x118) = fVar8 + (float)dVar10 * 2.5 + 6.5;
    }
  }
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(lVar3 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      lVar3 = *(long *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        uVar9 = *(undefined4 *)(param_2 + 0x11c);
        uVar2 = UnityEngine_Shader__PropertyToID_4372cb4
                          (*(undefined8 *)PTR_DAT_04cb6fe0,*(undefined8 *)PTR_DAT_04cb6fe0,0);
        if ((bRam0000000004fa6d88 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf6620);
          FUN_02132f7c(PTR_DAT_04cab588);
          bRam0000000004fa6d88 = 1;
        }
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar7 = *(long *)(lVar3 + 0x10);
        if (lVar7 != 0) {
          if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (pcRam0000000004fa6f68 == (code *)0x0) {
            pcRam0000000004fa6f68 = (code *)FUN_02132f40(&UNK_00e40218);
          }
                    /* WARNING: Could not recover jumptable at 0x0447fb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa6f68)(uVar9,lVar7,uVar2);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
      }
LAB_023d87e8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

