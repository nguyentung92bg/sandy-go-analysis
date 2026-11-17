/* IL2CPP: Dino.BusSand.App.Fx$$Restart
float Dino_BusSand_App_Fx__Restart (UnityEngine_GameObject_o* go, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Fx$$Restart
   float Dino_BusSand_App_Fx__Restart (UnityEngine_GameObject_o* go, const MethodInfo* method); */

float Dino_BusSand_App_Fx__Restart_2150b94(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
                    /* catch() { ... } // from try @ 0225096c with catch @ 02250b94 */
                    /* catch() { ... } // from try @ 02250744 with catch @ 02250b98 */
                    /* catch() { ... } // from try @ 02250a24 with catch @ 02250b9c */
                    /* catch() { ... } // from try @ 022507fc with catch @ 02250ba0 */
                    /* try { // try from 02250bbc to 02350bef has its CatchHandler @ 02250bbc
                       catch(type#1 @ 00000000) { ... } // from try @ 02250bbc with catch @ 02250bbc
                       catch(type#1 @ 00000000) { ... } // from try @ 02250c40 with catch @ 02250bbc
                        */
  if ((bRam0000000004f9b7c1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab498);
    FUN_02132f7c(PTR_DAT_04cab4a0);
    FUN_02132f7c(PTR_DAT_04cab4a8);
                    /* try { // try from 02250bf0 to 02350c0b has its CatchHandler @ 02250c34 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b7c1 = 1;
  }
  puVar1 = PTR_DAT_04cab4a8;
  uStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
                    /* try { // try from 02250c10 to 02350c17 has its CatchHandler @ 02250c30 */
  if ((param_1 != 0) &&
     (lVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                        (param_1,1,*(undefined8 *)PTR_DAT_04cab4a8), lVar3 != 0)) {
    fVar14 = 0.0;
    uVar8 = *(uint *)(lVar3 + 0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02250c10 with catch @ 02250c30
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02250bf0 with catch @ 02250c34
                        */
                    /* try { // try from 02250c38 to 02350c3f has its CatchHandler @ 02250c48 */
    if (0 < (int)uVar8) {
      uVar10 = 0;
      do {
                    /* try { // try from 02250c40 to 02350c4b has its CatchHandler @ 02250bbc */
        if (uVar8 <= uVar10) goto LAB_02250f48;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02250c38 with catch @ 02250c48
                        */
                    /* try { // try from 02250c4c to 02350c7b has its CatchHandler @ 02250c4c
                       catch(type#1 @ 00000000) { ... } // from try @ 02250c4c with catch @ 02250c4c
                       catch(type#1 @ 00000000) { ... } // from try @ 02250ccc with catch @ 02250c4c
                        */
        lVar9 = *(long *)(lVar3 + (long)(int)uVar10 * 8 + 0x20);
        if ((lVar9 == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0), lVar4 == 0))
        goto LAB_02250f44;
        uVar5 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar4,0);
        if ((uVar5 & 1) != 0) {
                    /* try { // try from 02250c7c to 02350c97 has its CatchHandler @ 02250cc0 */
          UnityEngine_ParticleSystem__Clear_44363d8(lVar9,0,0);
          uStack_68 = UnityEngine_ParticleSystem__get_main_443295c(lVar9,0);
          uVar5 = UnityEngine_ParticleSystem_MainModule__get_loop_4432ac0(&uStack_68,0);
                    /* try { // try from 02250c9c to 02350ca3 has its CatchHandler @ 02250cbc */
          fVar13 = 2.0;
          if ((uVar5 & 1) == 0) {
            fVar11 = (float)UnityEngine_ParticleSystem_MainModule__get_duration_4432d34
                                      (&uStack_68,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02250c9c with catch @ 02250cbc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02250c7c with catch @ 02250cc0
                        */
            UnityEngine_ParticleSystem_MainModule__get_startLifetime_4437750
                      (&uStack_b0,&uStack_68,0);
                    /* try { // try from 02250cc4 to 02350ccb has its CatchHandler @ 02250cd4 */
                    /* try { // try from 02250ccc to 02350cd7 has its CatchHandler @ 02250c4c */
            uStack_88 = uStack_a8;
            uStack_90 = uStack_b0;
            uStack_78 = uStack_98;
            uStack_80 = uStack_a0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02250cc4 with catch @ 02250cd4
                        */
            fVar12 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax_4438168
                                      (&uStack_90,0);
                    /* try { // try from 02250cd8 to 02350cff has its CatchHandler @ 02250cd8
                       catch() { ... } // from try @ 02250cd8 with catch @ 02250cd8
                       catch() { ... } // from try @ 02250dd0 with catch @ 02250cd8 */
            UnityEngine_ParticleSystem_MainModule__get_startDelay_4437610(&uStack_d0,&uStack_68,0);
            uStack_88 = uStack_c8;
            uStack_90 = uStack_d0;
            uStack_78 = uStack_b8;
            uStack_80 = uStack_c0;
            fVar13 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax_4438168
                                      (&uStack_90,0);
                    /* try { // try from 02250d00 to 02350d13 has its CatchHandler @ 02250e08 */
            fVar13 = fVar11 + fVar12 + fVar13;
          }
          if (fVar14 < fVar13) {
            fVar14 = fVar13;
          }
        }
        uVar8 = *(uint *)(lVar3 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar8);
    }
                    /* try { // try from 02250d30 to 02350d37 has its CatchHandler @ 02250e14 */
    lVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                      (param_1,0,*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_04cab498;
    puVar1 = PTR_DAT_04ca9ae8;
    if (lVar3 != 0) {
      uVar8 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar8) {
        uVar10 = 0;
        do {
          if (uVar8 <= uVar10) goto LAB_02250f48;
          lVar9 = *(long *)(lVar3 + (long)(int)uVar10 * 8 + 0x20);
                    /* try { // try from 02250d70 to 02350d77 has its CatchHandler @ 02250e10 */
          if ((lVar9 == 0) ||
             (lVar4 = UnityEngine_Component__get_transform_43bcd18(lVar9,0), lVar4 == 0))
          goto LAB_02250f44;
          uVar6 = UnityEngine_Transform__get_parent_43d0d70(lVar4,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
          if ((uVar5 & 1) == 0) {
            lVar4 = UnityEngine_Component__get_transform_43bcd18(lVar9,0);
                    /* try { // try from 02250dc8 to 02350dcf has its CatchHandler @ 02250e0c */
            if ((lVar4 == 0) ||
               (lVar4 = UnityEngine_Transform__get_parent_43d0d70(lVar4,0), lVar4 == 0))
            goto LAB_02250f44;
                    /* try { // try from 02250dd0 to 02350e27 has its CatchHandler @ 02250cd8 */
            uVar6 = UnityEngine_Component__GetComponentInParent_object__26f9d74
                              (lVar4,*(undefined8 *)puVar2);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
            if ((uVar5 & 1) != 0) goto LAB_02250e4c;
                    /* catch() { ... } // from try @ 02250d00 with catch @ 02250e08 */
                    /* catch() { ... } // from try @ 02250dc8 with catch @ 02250e0c */
            uVar6 = UnityEngine_Component__get_transform_43bcd18(lVar9,0);
                    /* catch() { ... } // from try @ 02250d70 with catch @ 02250e10 */
                    /* catch() { ... } // from try @ 02250d30 with catch @ 02250e14 */
            uVar7 = UnityEngine_GameObject__get_transform_43c1048(param_1,0);
                    /* try { // try from 02250e28 to 02350e4b has its CatchHandler @ 02250e28
                       catch() { ... } // from try @ 02250e28 with catch @ 02250e28
                       catch() { ... } // from try @ 02250ec8 with catch @ 02250e28 */
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,uVar7,0);
            if ((uVar5 & 1) != 0) goto LAB_02250e4c;
          }
          else {
LAB_02250e4c:
                    /* try { // try from 02250e4c to 02350e5f has its CatchHandler @ 02250efc */
            UnityEngine_ParticleSystem__Play_4436148(lVar9,1,0);
          }
          uVar8 = *(uint *)(lVar3 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar8);
      }
                    /* try { // try from 02250e78 to 02350e7f has its CatchHandler @ 02250f08 */
      lVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                        (param_1,0,*(undefined8 *)PTR_DAT_04cab4a0);
      if (lVar3 != 0) {
        uVar8 = *(uint *)(lVar3 + 0x18);
        if (0 < (int)uVar8) {
          uVar10 = 0;
          do {
            if (uVar8 <= uVar10) {
LAB_02250f48:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar9 = *(long *)(lVar3 + (long)(int)uVar10 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_02250f44;
                    /* try { // try from 02250eb8 to 02350ebf has its CatchHandler @ 02250f04 */
            uVar6 = UnityEngine_Animation__get_clip_43341a8(lVar9,0);
                    /* try { // try from 02250ec0 to 02350ec7 has its CatchHandler @ 02250f00 */
                    /* try { // try from 02250ec8 to 02350f1b has its CatchHandler @ 02250e28 */
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
            if ((uVar5 & 1) != 0) {
              UnityEngine_Animation__Stop_4334660(lVar9,0);
                    /* catch() { ... } // from try @ 02250e4c with catch @ 02250efc */
              UnityEngine_Animation__Play_4335094(lVar9,0);
            }
                    /* catch() { ... } // from try @ 02250ec0 with catch @ 02250f00 */
            uVar8 = *(uint *)(lVar3 + 0x18);
                    /* catch() { ... } // from try @ 02250eb8 with catch @ 02250f04 */
            uVar10 = uVar10 + 1;
                    /* catch() { ... } // from try @ 02250e78 with catch @ 02250f08 */
          } while ((int)uVar10 < (int)uVar8);
        }
                    /* try { // try from 02250f1c to 02350f3b has its CatchHandler @ 02250f1c
                       catch() { ... } // from try @ 02250f1c with catch @ 02250f1c
                       catch() { ... } // from try @ 02250f50 with catch @ 02250f1c */
        fVar13 = _UNK_00e20754;
        if (_UNK_00e20754 <= fVar14) {
          fVar13 = fVar14;
        }
                    /* try { // try from 02250f3c to 02350f4f has its CatchHandler @ 02250f60 */
        return fVar13;
      }
    }
  }
LAB_02250f44:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

