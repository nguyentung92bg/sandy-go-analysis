/* IL2CPP: Dino.BusSand.View.GameView$$OnExiting
void Dino_BusSand_View_GameView__OnExiting (Dino_BusSand_View_GameView_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$OnExiting
   void Dino_BusSand_View_GameView__OnExiting (Dino_BusSand_View_GameView_o* __this, int32_t id,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__OnExiting_23a6e7c
               (undefined1 param_1 [16],double param_2,float param_3,long param_4,undefined4 param_5
               )

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_58;
  
  if ((bRam0000000004f9c937 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cbc548);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cbc5b8);
    bRam0000000004f9c937 = 1;
  }
  lStack_58 = 0;
  lStack_88 = 0;
  if (*(long *)(param_4 + 0xe0) != 0) {
    uVar2 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_4 + 0xe0),param_5,&lStack_58,*(undefined8 *)PTR_DAT_04cbc4b8)
    ;
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_4 + 0x20) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_4 + 0x20) + 0x20), lVar3 != 0)) {
      uVar2 = Dino_BusSand_Core_Road__TryGet_24127e0(lVar3,param_5,&lStack_88,0);
      if ((uVar2 & 1) != 0) {
        if (((lStack_88 == 0) || (*(long *)(param_4 + 0x20) == 0)) ||
           (lVar3 = *(long *)(*(long *)(param_4 + 0x20) + 0x20), lVar3 == 0)) goto LAB_024a7180;
        param_2 = *(double *)(lStack_88 + 0x48);
        if ((double)*(int *)(lVar3 + 0x20) < param_2) {
          if (lStack_58 == 0) goto LAB_024a7180;
          if (*(char *)(lStack_58 + 0x378) == '\0') {
            if (*(long *)(lStack_58 + 0x38) == 0) goto LAB_024a7180;
            lVar3 = *(long *)(param_4 + 0x140);
            uVar5 = UnityEngine_Transform__get_position_43d0e48(*(long *)(lStack_58 + 0x38),0);
            fVar10 = SUB84(param_2,0);
            if ((lStack_58 == 0) || (*(long *)(lStack_58 + 0x38) == 0)) goto LAB_024a7180;
            UnityEngine_Transform__get_eulerAngles_43d130c(*(long *)(lStack_58 + 0x38),0);
            uStack_a0 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            param_2 = (double)((ulong)param_2 & 0xffffffff);
            System_ValueTuple_Vector3__float__float____ctor_3110ad4
                      (uVar5,param_2,param_3,fVar10 + -90.0,0,&uStack_a0,
                       *(undefined8 *)PTR_DAT_04cbc5b8);
            if (lVar3 == 0) goto LAB_024a7180;
            uStack_78 = uStack_98;
            uStack_80 = uStack_a0;
            uStack_70 = uStack_90;
            System_Collections_Generic_Dictionary_int__ValueTuple_Vector3__float__float____set_Item_340d824
                      (lVar3,param_5,&uStack_80,*(undefined8 *)PTR_DAT_04cbc548);
          }
        }
      }
      puVar1 = PTR_DAT_04cad568;
      fVar10 = SUB84(param_2,0);
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__BusExit_2382cb8(**(long **)(lVar3 + 0xb8),0);
      }
      if ((lStack_58 != 0) &&
         (Dino_BusSand_View_VehicleView__ExitLaunch_23fe454(lStack_58,0), lStack_58 != 0)) {
        lVar4 = *(long *)(param_4 + 0xb8);
        lVar3 = UnityEngine_Component__get_transform_43bcd18(lStack_58,0);
        if (((lVar3 != 0) &&
            ((((fVar6 = (float)UnityEngine_Transform__get_position_43d0e48(lVar3,0), lStack_58 != 0
               && (fVar13 = param_3, fVar11 = fVar10,
                  lVar3 = UnityEngine_Component__get_transform_43bcd18(lStack_58,0), lVar3 != 0)) &&
              (fVar7 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar3,0), lStack_58 != 0))
             && ((fVar14 = fVar13, fVar12 = fVar11,
                 fVar8 = (float)Dino_BusSand_View_VehicleView__get_LengthWorld_23fefbc(lStack_58,0),
                 lStack_58 != 0 &&
                 (lVar3 = UnityEngine_Component__get_transform_43bcd18(lStack_58,0), lVar3 != 0)))))
            ) && (fVar9 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar3,0), lVar4 != 0)) {
          Dino_BusSand_View_Fx__Dust_2395354
                    (fVar6 - fVar7 * fVar8 * 0.5,fVar10 - fVar11 * fVar8 * 0.5,
                     param_3 - fVar13 * fVar8 * 0.5,fVar9 * _UNK_00e200a8,fVar12 * _UNK_00e200a8,
                     fVar14 * _UNK_00e200a8,_UNK_00e2094c,lVar4,3);
          return;
        }
      }
    }
  }
LAB_024a7180:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

