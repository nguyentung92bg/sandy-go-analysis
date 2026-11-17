/* IL2CPP: Dino.BusSand.View.ChainRig$$DropParts
void Dino_BusSand_View_ChainRig__DropParts (Dino_BusSand_View_ChainRig_o* __this, Dino_BusSand_View_ChainRig_Hitch_o* h, bool burst, Dino_BusSand_View_Fx_o* fx, float cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.ChainRig$$DropParts
   void Dino_BusSand_View_ChainRig__DropParts (Dino_BusSand_View_ChainRig_o* __this,
   Dino_BusSand_View_ChainRig_Hitch_o* h, bool burst, Dino_BusSand_View_Fx_o* fx, float cell, const
   MethodInfo* method); */

void Dino_BusSand_View_ChainRig__DropParts_2392b7c
               (undefined4 param_1,float param_2,float param_3,ulong param_4,long param_5,
               long param_6,byte param_7,long param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  puVar4 = PTR_DAT_04cbc108;
  if ((bRam0000000004f9c8d0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0b40);
    FUN_02132f7c(PTR_DAT_04cbc108);
    FUN_02132f7c(PTR_DAT_04cbc110);
    FUN_02132f7c(PTR_DAT_04cbc118);
    FUN_02132f7c(PTR_DAT_04cbc120);
    bRam0000000004f9c8d0 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Object___ctor_4870e5c(lVar5,0);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x10) = param_1;
    *(byte *)(lVar5 + 0x14) = param_7 & 1;
    puVar4 = PTR_DAT_04ca9ae8;
    if (param_6 != 0) {
      uVar9 = *(undefined8 *)(param_6 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
      if ((uVar6 & 1) == 0) {
        plVar8 = (long *)(param_6 + 0x28);
        lVar11 = *plVar8;
        lVar10 = *(long *)(param_6 + 0x20);
        *(undefined8 *)(param_6 + 0x20) = 0;
        thunk_FUN_02134474((undefined8 *)(param_6 + 0x20),0);
        *plVar8 = 0;
        thunk_FUN_02134474(plVar8,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
        if ((uVar6 & 1) != 0) {
          if (lVar11 == 0) goto LAB_02493114;
          UnityEngine_Transform__SetParent_43d1e34(lVar11,*(undefined8 *)(param_5 + 0x28),1,0);
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
        if ((uVar6 & 1) == 0) {
          plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cb0b40,1);
          if (plVar8 == (long *)0x0) goto LAB_02493114;
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
          goto LAB_0249311c;
          if ((int)plVar8[3] == 0) goto LAB_02493118;
          plVar12 = plVar8 + 4;
          *plVar12 = lVar10;
        }
        else {
          plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cb0b40,2);
          if (plVar8 == (long *)0x0) goto LAB_02493114;
          if ((lVar10 != 0) &&
             (lVar7 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
LAB_0249311c:
            uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar9,0);
          }
          if ((int)plVar8[3] == 0) {
LAB_02493118:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar8[4] = lVar10;
          thunk_FUN_02134474(plVar8 + 4,lVar10);
          if ((lVar11 != 0) &&
             (lVar10 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_0249311c;
          if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_02493118;
          plVar12 = plVar8 + 5;
          *plVar12 = lVar11;
          lVar10 = lVar11;
        }
        thunk_FUN_02134474(plVar12,lVar10);
        puVar4 = PTR_DAT_04caa208;
        fVar3 = _UNK_00e207cc;
        fVar2 = _UNK_00e20660;
        fVar1 = _UNK_00e20094;
        if (0 < (int)plVar8[3]) {
          uVar6 = 0;
                    /* try { // try from 02492e30 to 02592e37 has its CatchHandler @ 02492fc8 */
          do {
                    /* try { // try from 02492e40 to 02592e47 has its CatchHandler @ 02492fc4 */
            lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbc120);
            System_Object___ctor_4870e5c(lVar10,0);
            if (lVar10 == 0) goto LAB_02493114;
            plVar12 = (long *)(lVar10 + 0x50);
            *plVar12 = lVar5;
                    /* try { // try from 02492e64 to 02592e6f has its CatchHandler @ 02492fb4 */
            thunk_FUN_02134474(plVar12,lVar5);
                    /* try { // try from 02492e70 to 02592e7b has its CatchHandler @ 02492fb8 */
            if (*(uint *)(plVar8 + 3) <= uVar6) goto LAB_02493118;
            plVar13 = (long *)(lVar10 + 0x10);
            *plVar13 = plVar8[uVar6 + 4];
                    /* try { // try from 02492e84 to 02592e8f has its CatchHandler @ 02492fac */
            thunk_FUN_02134474(plVar13);
                    /* try { // try from 02492e90 to 02592e9b has its CatchHandler @ 02492fb0 */
            if (*plVar13 == 0) goto LAB_02493114;
            uVar14 = UnityEngine_Transform__get_localScale_43d1b0c(*plVar13,0);
            *(undefined4 *)(lVar10 + 0x44) = uVar14;
            *(float *)(lVar10 + 0x48) = param_2;
            *(float *)(lVar10 + 0x4c) = param_3;
                    /* try { // try from 02492ea8 to 02592f0b has its CatchHandler @ 02492fbc */
            if (*(long *)(lVar10 + 0x10) == 0) goto LAB_02493114;
            uVar14 = UnityEngine_Transform__get_position_43d0e48(*(long *)(lVar10 + 0x10),0);
            *(undefined4 *)(lVar10 + 0x18) = uVar14;
            *(float *)(lVar10 + 0x1c) = param_2;
            *(float *)(lVar10 + 0x20) = param_3;
            if (*(long *)(lVar10 + 0x10) == 0) goto LAB_02493114;
            uVar14 = UnityEngine_Transform__get_rotation_43d133c(*(long *)(lVar10 + 0x10),0);
            lVar11 = *(long *)(lVar10 + 0x50);
            *(undefined4 *)(lVar10 + 0x30) = uVar14;
            *(float *)(lVar10 + 0x34) = param_2;
            *(float *)(lVar10 + 0x38) = param_3;
            *(int *)(lVar10 + 0x3c) = (int)param_4;
            uVar14 = 0x3f800000;
            if (uVar6 != 0) {
              uVar14 = 0xbf800000;
            }
            *(undefined4 *)(lVar10 + 0x40) = uVar14;
            if (lVar11 == 0) goto LAB_02493114;
            if (*(char *)(lVar11 + 0x14) == '\0') {
              if (cRam0000000004f9b65d == '\0') {
                FUN_02132f7c(puVar4);
                lVar11 = *plVar12;
                cRam0000000004f9b65d = '\x01';
              }
                    /* try { // try from 02492fa4 to 02592fa7 has its CatchHandler @ 02492fc0 */
                    /* try { // try from 02492fa8 to 02592fe3 has its CatchHandler @ 02492b2c */
              uVar14 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02492e84 with catch @ 02492fac
                        */
              *(undefined8 *)(lVar10 + 0x24) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02492e90 with catch @ 02492fb0
                        */
              *(undefined4 *)(lVar10 + 0x2c) = uVar14;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02492e64 with catch @ 02492fb4
                        */
              if (lVar11 == 0) goto LAB_02493114;
            }
            else {
              if (cRam0000000004f9bcf8 == '\0') {
                FUN_02132f7c(puVar4);
                    /* try { // try from 02492f0c to 02592fa3 has its CatchHandler @ 02492b2c */
                cRam0000000004f9bcf8 = '\x01';
              }
              if (*plVar13 == 0) goto LAB_02493114;
              fVar18 = *(float *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
              uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
              fVar15 = (float)UnityEngine_Transform__get_right_43d15f4(*plVar13,0);
              lVar11 = *plVar12;
              if (lVar11 == 0) goto LAB_02493114;
              fVar16 = *(float *)(lVar10 + 0x40);
              fVar18 = fVar18 * fVar2;
              param_4 = (ulong)(uint)fVar18;
              fVar17 = param_3 * fVar16;
              param_3 = *(float *)(lVar11 + 0x10);
              *(ulong *)(lVar10 + 0x24) =
                   CONCAT44(((float)((ulong)uVar9 >> 0x20) * 1.4 + param_2 * fVar16 * 0.6) * param_3
                            ,((float)uVar9 * 1.4 + fVar15 * fVar16 * 0.6) * param_3);
              *(float *)(lVar10 + 0x2c) = param_3 * (fVar18 + fVar17 * fVar1);
            }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02492e70 with catch @ 02492fb8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02492ea8 with catch @ 02492fbc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02492fa4 with catch @ 02492fc0
                        */
            if ((param_8 != 0) && (*(char *)(lVar11 + 0x14) != '\0')) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02492e40 with catch @ 02492fc4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02492e30 with catch @ 02492fc8
                        */
              uVar9 = *(undefined8 *)(lVar10 + 0x18);
              param_3 = *(float *)(lVar10 + 0x20);
              if (cRam0000000004f9bcf8 == '\0') {
                FUN_02132f7c(puVar4);
                lVar11 = *plVar12;
                    /* try { // try from 02492fe4 to 02592fe7 has its CatchHandler @ 02493130 */
                cRam0000000004f9bcf8 = '\x01';
                    /* try { // try from 02492fe8 to 02593133 has its CatchHandler @ 02492b2c */
                if (lVar11 == 0) goto LAB_02493114;
              }
              fVar15 = *(float *)(lVar11 + 0x10);
              param_4 = *(ulong *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
              fVar16 = (float)(param_4 >> 0x20);
              fVar18 = (float)((ulong)uVar9 >> 0x20) + fVar16 * fVar15 * 0.3;
              param_3 = param_3 + *(float *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) * fVar15 *
                                  fVar3;
              Dino_BusSand_View_Fx__Sparks_2393138
                        (CONCAT44(fVar18,(float)uVar9 + (float)param_4 * fVar15 * 0.3),fVar18,
                         param_3,param_4,fVar16,param_8,3);
              lVar11 = *plVar12;
              if (lVar11 == 0) goto LAB_02493114;
            }
            param_2 = 0.25;
            uVar14 = 0x3e800000;
            if (*(char *)(lVar11 + 0x14) != '\0') {
              uVar14 = 0x3f000000;
            }
            uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
            System_Action_float____ctor_35f1448(uVar9,lVar10,*(undefined8 *)PTR_DAT_04cbc110,0);
            lVar11 = Dino_BusSand_Tween__Value_238bbfc(uVar14,uVar9);
            uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar9,lVar10,*(undefined8 *)PTR_DAT_04cbc118,0);
            if (lVar11 == 0) goto LAB_02493114;
            *(undefined8 *)(lVar11 + 0x40) = uVar9;
            thunk_FUN_02134474((undefined8 *)(lVar11 + 0x40),uVar9);
            *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(param_5 + 0x28);
            thunk_FUN_02134474((undefined8 *)(lVar11 + 0x18));
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)(int)plVar8[3]);
        }
      }
      return;
    }
  }
LAB_02493114:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

