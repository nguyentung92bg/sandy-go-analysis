/* IL2CPP: Dino.BusSand.View.GarageView$$BuildArt
bool Dino_BusSand_View_GarageView__BuildArt (Dino_BusSand_View_GarageView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GarageView$$BuildArt
   bool Dino_BusSand_View_GarageView__BuildArt (Dino_BusSand_View_GarageView_o* __this, const
   MethodInfo* method); */

uint Dino_BusSand_View_GarageView__BuildArt_23b0638(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c96d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc848);
    FUN_02132f7c(PTR_DAT_04cb7798);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cbc850);
    FUN_02132f7c(PTR_DAT_04cbc858);
    FUN_02132f7c(PTR_DAT_04cbc860);
    FUN_02132f7c(PTR_DAT_04cbc868);
    bRam0000000004f9c96d = 1;
  }
  uVar4 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  uVar4 = 0;
  if ((uVar5 & 1) != 0) {
    lVar6 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
    if (lVar6 == 0) goto LAB_024b0b88;
    uVar4 = *(undefined8 *)(lVar6 + 0xc0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar3 & 1) != 0) goto LAB_024b0b64;
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = UnityEngine_Object__Instantiate_object__2805310
                    (uVar4,uVar10,0,*(undefined8 *)PTR_DAT_04cad390);
  if (lVar6 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar6,*(undefined8 *)PTR_DAT_04cbc868,0);
    lVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                      (lVar6,1,*(undefined8 *)PTR_DAT_04cb7798);
    if (lVar7 != 0) {
      uVar8 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar8) {
        lVar12 = 0;
        do {
          if (uVar8 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar11 = *(long *)(lVar7 + 0x20 + lVar12 * 8);
          if (lVar11 == 0) goto LAB_024b0b88;
          UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar11,0,0);
          UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar11,0,0);
          uVar8 = *(uint *)(lVar7 + 0x18);
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 < (int)uVar8);
      }
      lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
      if (lVar6 != 0) {
        UnityEngine_Transform__set_localPosition_43cfda8(0,0,_UNK_00e207b8,lVar6,0);
        if (cRam0000000004f9b88b == '\0') {
          FUN_02132f7c(PTR_DAT_04cab4b0);
          cRam0000000004f9b88b = '\x01';
        }
        puVar9 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
        UnityEngine_Transform__set_localRotation_43d156c
                  (*puVar9,puVar9[1],puVar9[2],puVar9[3],lVar6,0);
        UnityEngine_Transform__set_localScale_43d1be0
                  (_UNK_00e208a0,_UNK_00e20acc,_UNK_00e2062c,lVar6,0);
        lVar6 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04cbc858,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar5 & 1) == 0) goto LAB_024b0b64;
        if (lVar6 != 0) {
          UnityEngine_Transform__SetParent_43d1e34(lVar6,*(undefined8 *)(param_1 + 0x28),0,0);
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          puVar2 = PTR_DAT_04caa208;
          puVar9 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          UnityEngine_Transform__set_localPosition_43cfda8(*puVar9,puVar9[1],puVar9[2],lVar6,0);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          uVar4 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc);
          fVar13 = (float)((ulong)uVar4 >> 0x20) * 0.8058371;
          UnityEngine_Transform__set_localScale_43d1be0
                    (CONCAT44(fVar13,(float)uVar4 * 0.8058371),fVar13,
                     *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14) * _UNK_00e20574,lVar6,0);
          puVar2 = PTR_DAT_04cbc250;
          lVar7 = *(long *)PTR_DAT_04cbc250;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar2;
          }
          UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                    (**(float **)(lVar7 + 0xb8) * _UNK_00e205cc,_UNK_00e2082c,0,0);
          UnityEngine_Transform__set_rotation_43d13f8(lVar6,0);
          lVar7 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04cbc860,0);
          lVar6 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04cbc850,0);
          lVar12 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
          if (lVar12 != 0) {
            fVar13 = (float)UnityEngine_Transform__get_position_43d0e48(lVar12,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
            if ((uVar5 & 1) != 0) {
              if ((lVar7 == 0) ||
                 (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar12 == 0))
              goto LAB_024b0b88;
              UnityEngine_GameObject__SetActive_43c1408(lVar12,0.0 < fVar13,0);
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
            if ((uVar5 & 1) != 0) {
              if ((lVar6 == 0) ||
                 (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar12 == 0))
              goto LAB_024b0b88;
              UnityEngine_GameObject__SetActive_43c1408(lVar12,fVar13 <= 0.0,0);
            }
            if (fVar13 <= 0.0) {
              lVar7 = lVar6;
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
            lVar6 = 0;
            if ((uVar5 & 1) != 0) {
              if (lVar7 == 0) goto LAB_024b0b88;
              lVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                                (lVar7,*(undefined8 *)PTR_DAT_04cbc848);
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
            if ((uVar5 & 1) != 0) {
              if (lVar6 == 0) goto LAB_024b0b88;
              UnityEngine_SpriteRenderer__set_flipX_434e308(lVar6,1,0);
              *(long *)(param_1 + 0x50) = lVar7;
              thunk_FUN_02134474((long *)(param_1 + 0x50),lVar7);
            }
LAB_024b0b64:
            return (uVar3 ^ 0xffffffff) & 1;
          }
        }
      }
    }
  }
LAB_024b0b88:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

