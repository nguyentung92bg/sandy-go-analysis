/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$Sample
void Dino_BusSand_App_UI_MainHudPanel__Sample (UnityEngine_Animation_o* anim, System_String_o* clip, bool last, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023fe388) */
/* WARNING: Removing unreachable block (ram,0x023fe434) */
/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$Sample
   void Dino_BusSand_App_UI_MainHudPanel__Sample (UnityEngine_Animation_o* anim, System_String_o*
   clip, bool last, const MethodInfo* method); */

void Dino_BusSand_App_UI_MainHudPanel__Sample_22fe068(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c4bf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7b10);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c4bf = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0);
    plVar8 = (long *)0x0;
    if ((uVar2 & 1) == 0) {
      if (param_1 == 0) goto LAB_023fe42c;
      plVar8 = (long *)UnityEngine_Animation__get_Item_4334ee8(param_1,param_2,0);
    }
    uVar2 = UnityEngine_TrackedReference__op_Equality_43c6a1c(plVar8,0,0);
    if ((uVar2 & 1) != 0) {
      if (param_1 == 0) goto LAB_023fe42c;
      uVar3 = UnityEngine_Animation__get_clip_43341a8(param_1,0);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar6);
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        lVar6 = UnityEngine_Animation__get_clip_43341a8(param_1,0);
        if (lVar6 == 0) goto LAB_023fe42c;
        uVar3 = UnityEngine_Object__get_name_43c71a4(lVar6,0);
        plVar8 = (long *)UnityEngine_Animation__get_Item_4334ee8(param_1,uVar3,0);
      }
    }
    uVar2 = UnityEngine_TrackedReference__op_Equality_43c6a1c(plVar8,0,0);
    if ((uVar2 & 1) != 0) {
      if (param_1 == 0) goto LAB_023fe42c;
      plVar4 = (long *)UnityEngine_Animation__GetEnumerator_43363c8(param_1,0);
      puVar1 = PTR_DAT_04ca9c08;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04ca9c08) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_023fe248;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04ca9c08,0);
LAB_023fe248:
      uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar2 & 1) != 0) {
                    /* try { // try from 023fe258 to 024fe39f has its CatchHandler @ 023fe258
                       catch() { ... } // from try @ 023fe258 with catch @ 023fe258
                       catch() { ... } // from try @ 023fe618 with catch @ 023fe258
                       catch() { ... } // from try @ 023fe6d4 with catch @ 023fe258
                       catch() { ... } // from try @ 023fe6e4 with catch @ 023fe258
                       catch() { ... } // from try @ 023fe768 with catch @ 023fe258 */
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar6 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_023fe2c8;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)puVar1,1);
LAB_023fe2c8:
        plVar8 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)PTR_DAT_04cb7b10)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar8);
        }
      }
      puVar1 = PTR_DAT_04ca9b30;
      plVar4 = (long *)thunk_FUN_0216e7a0(plVar4,*(undefined8 *)PTR_DAT_04ca9b30);
      if (plVar4 != (long *)0x0) {
        lVar6 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_023fe370;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)puVar1,0);
LAB_023fe370:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
      }
    }
    uVar2 = UnityEngine_TrackedReference__op_Equality_43c6a1c(plVar8,0,0);
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 023fe3a0 to 024fe3c7 has its CatchHandler @ 023fe734 */
      if ((param_1 == 0) || (UnityEngine_Animation__Stop_4334660(param_1,0), plVar8 == (long *)0x0))
      {
LAB_023fe42c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_AnimationState__set_enabled_4336edc(plVar8,1,0);
      UnityEngine_AnimationState__set_weight_4336f78(0x3f800000,plVar8,0);
      if ((param_3 & 1) != 0) {
        UnityEngine_AnimationState__get_length_4337218(0,plVar8,0);
      }
      UnityEngine_AnimationState__set_time_43370c0(plVar8,0);
      UnityEngine_Animation__Sample_4334b90(param_1,0);
                    /* try { // try from 023fe404 to 024fe42f has its CatchHandler @ 023fe730 */
      UnityEngine_AnimationState__set_enabled_4336edc(plVar8,0,0);
    }
  }
  return;
}

