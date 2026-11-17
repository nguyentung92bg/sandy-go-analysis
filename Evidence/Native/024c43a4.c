/* IL2CPP: Dino.BusSand.View.MechanicLayer$$PlaceLaneGhosts
void Dino_BusSand_View_MechanicLayer__PlaceLaneGhosts (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_Core_Lane_o* lane, Dino_BusSand_View_MechanicLayer_LaneVis_o* lv, bool animate, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$PlaceLaneGhosts
   void Dino_BusSand_View_MechanicLayer__PlaceLaneGhosts (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_Core_Lane_o* lane, Dino_BusSand_View_MechanicLayer_LaneVis_o* lv, bool animate,
   float delay, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__PlaceLaneGhosts_23c43a4
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4,
               long param_5,long param_6,long param_7,ulong param_8)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  float fVar15;
  undefined4 uVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  ulong uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_94;
  
  if ((bRam0000000004f9c9cf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbc0f8);
    FUN_02132f7c(PTR_DAT_04cbd1b8);
    FUN_02132f7c(PTR_DAT_04cbd1c0);
    FUN_02132f7c(PTR_DAT_04caea30);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd1c8);
    FUN_02132f7c(PTR_DAT_04cbd1d0);
    bRam0000000004f9c9cf = 1;
  }
  uStack_94 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (param_6 == 0) goto LAB_024c4720;
  if (*(int *)(param_6 + 0x30) < 0) {
LAB_024c44f4:
    fVar21 = *(float *)(param_5 + 0x50) * _UNK_00e2043c;
  }
  else {
    if ((*(long *)(param_5 + 0x20) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_5 + 0x20) + 0x58), lVar9 == 0)) goto LAB_024c4720;
    uVar10 = System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue_3431fdc
                       (lVar9,*(int *)(param_6 + 0x30),&uStack_94,*(undefined8 *)PTR_DAT_04cbc0f8);
    uVar19 = uStack_94;
    if ((uVar10 & 1) == 0) goto LAB_024c44f4;
    if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar17 = (double)Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0(uVar19,0);
    fVar21 = *(float *)(param_5 + 0x50) * (float)(dVar17 + _UNK_00e69a38);
  }
  puVar8 = PTR_DAT_04cbd1d0;
  puVar7 = PTR_DAT_04cbd1c0;
  puVar6 = PTR_DAT_04caea30;
  puVar5 = PTR_DAT_04cac5d0;
  puVar3 = PTR_DAT_04ca9ae8;
  fVar2 = _UNK_00e20aec;
  fVar1 = _UNK_00e20174;
  if ((param_7 != 0) && (lVar9 = *(long *)(param_7 + 0x18), lVar9 != 0)) {
    iVar12 = 0;
    do {
      if (*(int *)(lVar9 + 0x18) <= iVar12) {
        return;
      }
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
      Dino_BusSand_View_MechanicLayer___c__DisplayClass61_0___ctor_23d570c(lVar9,0);
      if ((*(long *)(param_7 + 0x20) == 0) ||
         (fVar15 = (float)System_Collections_Generic_List_float___get_Item_3ac25c4
                                    (*(long *)(param_7 + 0x20),iVar12,*(undefined8 *)puVar6),
         lVar9 == 0)) break;
      fVar20 = *(float *)(param_5 + 0x50);
      uVar13 = *(undefined8 *)(param_7 + 0x10);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar15 = fVar15 * fVar20 * 0.5;
      fVar21 = fVar21 + fVar20 * fVar2 + fVar15;
      Dino_BusSand_View_MechanicLayer__AlongPath_23c56d4(fVar21,uVar13,lVar9 + 0x10,&uStack_b0);
      if (*(long *)(param_7 + 0x18) == 0) break;
      lVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                         (*(long *)(param_7 + 0x18),iVar12,*(undefined8 *)puVar7);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
      if ((uVar10 & 1) == 0) {
        uVar18 = (undefined4)(uStack_b0 >> 0x20);
        uVar19 = uStack_a8;
        uVar16 = UnityEngine_Quaternion__LookRotation_43af354(uStack_b0 & 0xffffffff,0);
        *(undefined4 *)(lVar9 + 0x1c) = uVar16;
        *(undefined4 *)(lVar9 + 0x20) = uVar18;
        *(undefined4 *)(lVar9 + 0x24) = uVar19;
        *(undefined4 *)(lVar9 + 0x28) = param_4;
        if ((param_8 & 1) == 0) {
          if ((lVar11 == 0) ||
             (lVar11 = UnityEngine_Component__get_transform_43bcd18(lVar11,0), lVar11 == 0)) break;
          param_4 = *(undefined4 *)(lVar9 + 0x1c);
          UnityEngine_Transform__SetPositionAndRotation_43d2064
                    (*(undefined4 *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0x14),
                     *(undefined4 *)(lVar9 + 0x18),param_4,*(undefined4 *)(lVar9 + 0x20),
                     *(undefined4 *)(lVar9 + 0x24),*(undefined4 *)(lVar9 + 0x28),lVar11,0);
        }
        else {
          if (lVar11 == 0) break;
          lVar11 = UnityEngine_Component__get_transform_43bcd18(lVar11,0);
          plVar14 = (long *)(lVar9 + 0x30);
          *plVar14 = lVar11;
          thunk_FUN_02134474(plVar14,lVar11);
          if (*plVar14 == 0) break;
          uVar16 = UnityEngine_Transform__get_position_43d0e48(*plVar14,0);
          *(undefined4 *)(lVar9 + 0x38) = uVar16;
          *(undefined4 *)(lVar9 + 0x3c) = uVar18;
          *(undefined4 *)(lVar9 + 0x40) = uVar19;
          if (*(long *)(lVar9 + 0x30) == 0) break;
          uVar16 = UnityEngine_Transform__get_rotation_43d133c(*(long *)(lVar9 + 0x30),0);
          *(undefined4 *)(lVar9 + 0x44) = uVar16;
          *(undefined4 *)(lVar9 + 0x48) = uVar18;
          puVar4 = PTR_DAT_04cac208;
          *(undefined4 *)(lVar9 + 0x4c) = uVar19;
          *(undefined4 *)(lVar9 + 0x50) = param_4;
          uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
          System_Action_float____ctor_35f1448(uVar13,lVar9,*(undefined8 *)PTR_DAT_04cbd1c8,0);
          lVar9 = Dino_BusSand_Tween__Value_238bbfc(0x3f000000,uVar13,0);
          if ((lVar9 == 0) ||
             (lVar9 = Dino_BusSand_Tween__SetDelay_238bb40((float)iVar12 * fVar1 + param_1,lVar9,0),
             lVar9 == 0)) break;
          Dino_BusSand_Tween__SetOwner_238bb58(lVar9,param_5,0);
        }
      }
      fVar21 = fVar15 + fVar21;
      lVar9 = *(long *)(param_7 + 0x18);
      iVar12 = iVar12 + 1;
    } while (lVar9 != 0);
  }
LAB_024c4720:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

