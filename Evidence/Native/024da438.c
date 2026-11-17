/* IL2CPP: Dino.BusSand.View.PickUpClaw$$.ctor
void Dino_BusSand_View_PickUpClaw___ctor (Dino_BusSand_View_PickUpClaw_o* __this, UnityEngine_Transform_o* root, Dino_BusSand_View_VehicleView_o* car, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PickUpClaw$$.ctor
   void Dino_BusSand_View_PickUpClaw___ctor (Dino_BusSand_View_PickUpClaw_o* __this,
   UnityEngine_Transform_o* root, Dino_BusSand_View_VehicleView_o* car, const MethodInfo* method);
    */

void Dino_BusSand_View_PickUpClaw___ctor_23da438(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  uint uStack_64;
  
  puVar2 = PTR_DAT_04cb0b40;
  puVar1 = PTR_DAT_04caadd0;
  if ((bRam0000000004f9ca3c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cb0b40);
    FUN_02132f7c(PTR_DAT_04cbd838);
    FUN_02132f7c(PTR_DAT_04cbd840);
    bRam0000000004f9ca3c = 1;
  }
  uStack_64 = 0;
  uVar5 = FUN_02133068(*(undefined8 *)puVar2,3);
  puVar9 = (undefined8 *)(param_1 + 0x18);
  *puVar9 = uVar5;
  thunk_FUN_02134474(puVar9,uVar5);
  lVar6 = FUN_02133068(*(undefined8 *)puVar1,3);
  plVar10 = (long *)(param_1 + 0x20);
  *plVar10 = lVar6;
  thunk_FUN_02134474(plVar10,lVar6);
  System_Object___ctor_4870e5c(param_1,0);
  *(long *)(param_1 + 0x10) = param_2;
  thunk_FUN_02134474((long *)(param_1 + 0x10),param_2);
  *(long *)(param_1 + 0x28) = param_3;
  thunk_FUN_02134474((long *)(param_1 + 0x28),param_3);
  if (param_3 != 0) {
    fVar14 = *(float *)(param_3 + 0xb0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (param_2 != 0) {
      fVar14 = fVar14 * _UNK_00e20838;
      lVar6 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      fVar13 = fVar14 * *(float *)(lVar6 + 0x10);
      UnityEngine_Transform__set_localScale_43d1be0
                (fVar14 * *(float *)(lVar6 + 0xc),fVar13,fVar14 * *(float *)(lVar6 + 0x14),param_2,0
                );
      puVar3 = PTR_DAT_04cbd840;
      puVar2 = PTR_DAT_04cbd838;
      puVar1 = PTR_DAT_04ca9ae8;
      if (*(long *)(param_3 + 0x38) != 0) {
        UnityEngine_Transform__get_eulerAngles_43d130c(*(long *)(param_3 + 0x38),0);
        *(float *)(param_1 + 0x34) = fVar13;
        fVar13 = (float)Dino_BusSand_View_VehicleView__get_ModelHeightWorld_23fefb0(param_3,0);
        uStack_64 = 0;
        fVar14 = fVar14 * _UNK_00e2057c;
        *(float *)(param_1 + 0x30) = fVar14 + fVar13 * _UNK_00e1fea8;
        do {
          uVar5 = System_Int32__ToString_482d750(&uStack_64,0);
          uVar5 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar5,0);
          lVar6 = Dino_BusSand_View_PickUpClaw__Find_23da76c(param_2,uVar5);
          uVar4 = uStack_64;
          plVar11 = (long *)*puVar9;
          if (plVar11 == (long *)0x0) goto LAB_024da758;
          lVar12 = (long)(int)uStack_64;
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0)) {
            uVar5 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar5,0);
          }
          if (*(uint *)(plVar11 + 3) <= uVar4) {
LAB_024da75c:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar11[lVar12 + 4] = lVar6;
          thunk_FUN_02134474(plVar11 + lVar12 + 4,lVar6);
                    /* try { // try from 024da670 to 025da82f has its CatchHandler @ 024da670
                       catch() { ... } // from try @ 024da670 with catch @ 024da670
                       catch() { ... } // from try @ 024da89c with catch @ 024da670
                       catch() { ... } // from try @ 024da93c with catch @ 024da670
                       catch() { ... } // from try @ 024da974 with catch @ 024da670
                       catch() { ... } // from try @ 024da9a0 with catch @ 024da670 */
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
          uVar4 = uStack_64;
          if ((uVar8 & 1) != 0) {
            if (lVar6 == 0) goto LAB_024da758;
            lVar12 = *plVar10;
            lVar7 = (long)(int)uStack_64;
            UnityEngine_Transform__get_localEulerAngles_43d1480(lVar6,0);
            if (lVar12 == 0) goto LAB_024da758;
            if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_024da75c;
            *(float *)(lVar12 + lVar7 * 4 + 0x20) = fVar14;
          }
          uStack_64 = uStack_64 + 1;
        } while ((int)uStack_64 < 3);
        lVar6 = Dino_BusSand_View_PickUpClaw__Find_23da76c(param_2,*(undefined8 *)puVar3);
        lVar12 = *(long *)puVar1;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar12);
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar8 & 1) != 0) {
          if (lVar6 == 0) goto LAB_024da758;
          UnityEngine_Transform__set_localScale_43d1be0(0x3f800000,0x42200000,0x3f800000,lVar6,0);
        }
        Dino_BusSand_View_PickUpClaw__Pose_23da860(0,param_1);
        return;
      }
    }
  }
LAB_024da758:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

