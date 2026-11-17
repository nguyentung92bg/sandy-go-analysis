/* IL2CPP: Dino.BusSand.App.UI.UIParticleSorting$$EffectiveOrder
int32_t Dino_BusSand_App_UI_UIParticleSorting__EffectiveOrder (UnityEngine_Canvas_o* c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIParticleSorting$$EffectiveOrder
   int32_t Dino_BusSand_App_UI_UIParticleSorting__EffectiveOrder (UnityEngine_Canvas_o* c, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UIParticleSorting__EffectiveOrder_217dc1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000004f9b912 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad3d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b912 = 1;
  }
  puVar2 = PTR_DAT_04cad3d0;
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    lVar3 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    do {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (lVar3 == 0) break;
      lVar5 = UnityEngine_Component__GetComponent_object__26f97e8(lVar3,*(undefined8 *)puVar2);
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar7);
      }
                    /* try { // try from 0227dcd0 to 0237dd6f has its CatchHandler @ 0227dcd0
                       catch() { ... } // from try @ 0227dcd0 with catch @ 0227dcd0
                       catch() { ... } // from try @ 0227dde4 with catch @ 0227dcd0
                       catch() { ... } // from try @ 0227de18 with catch @ 0227dcd0
                       catch() { ... } // from try @ 0227df6c with catch @ 0227dcd0
                       catch() { ... } // from try @ 0227dfcc with catch @ 0227dcd0 */
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      if ((uVar4 & 1) != 0) {
        if (lVar5 == 0) break;
        uVar4 = UnityEngine_Canvas__get_overrideSorting_467feb8(lVar5,0);
        if (((uVar4 & 1) != 0) ||
           (uVar4 = UnityEngine_Canvas__get_isRootCanvas_467f378(lVar5,0), (uVar4 & 1) != 0)) {
          if ((bRam0000000004fac4d7 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04d09c28,0);
            bRam0000000004fac4d7 = 1;
          }
          if (lVar5 != 0) {
            lVar3 = *(long *)(lVar5 + 0x10);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
            }
            if (pcRam0000000004fac5a0 == (code *)0x0) {
              pcRam0000000004fac5a0 = (code *)FUN_02132f40(&UNK_00e66a92);
            }
                    /* WARNING: Could not recover jumptable at 0x047800a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (*pcRam0000000004fac5a0)(lVar3);
            return uVar6;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      lVar3 = UnityEngine_Transform__get_parent_43d0d70(lVar3,0);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

