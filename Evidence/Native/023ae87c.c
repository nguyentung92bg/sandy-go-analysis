/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$SetRewardItem
void Dino_BusSand_App_UI_CommonGetPanel__SetRewardItem (Dino_BusSand_App_UI_CommonGetPanel_o* __this, UnityEngine_RectTransform_o* item, int32_t id, int64_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$SetRewardItem
   void Dino_BusSand_App_UI_CommonGetPanel__SetRewardItem (Dino_BusSand_App_UI_CommonGetPanel_o*
   __this, UnityEngine_RectTransform_o* item, int32_t id, int64_t count, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_CommonGetPanel__SetRewardItem_22ae87c
               (long param_1,long param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_68;
  
  uStack_68 = param_4;
  if ((bRam0000000004f9c2ba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04cb5fa8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04cb03d8);
    FUN_02132f7c(PTR_DAT_04caed30);
    FUN_02132f7c(PTR_DAT_04cb03e8);
    FUN_02132f7c(PTR_DAT_04cb5fb0);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb0408);
    FUN_02132f7c(PTR_DAT_04cb5fb8);
    FUN_02132f7c(PTR_DAT_04cb0418);
    bRam0000000004f9c2ba = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (param_2 != 0) {
    lVar9 = UnityEngine_Transform__Find_43d4bec(param_2,*(undefined8 *)PTR_DAT_04cadc80,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar10 & 1) != 0) {
      if (lVar9 == 0) goto LAB_023aedec;
      uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cb0418,0);
      puVar4 = PTR_DAT_04cac7b8;
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
      }
      bVar8 = param_3 == 0x3e9;
      bVar1 = !bVar8;
      Dino_BusSand_App_UI_CommerceUi__SetActive_22ac144(uVar11,bVar8);
      puVar5 = PTR_DAT_04cb03d8;
      uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cb03d8,0);
      Dino_BusSand_App_UI_CommerceUi__SetActive_22ac144(uVar11,bVar1);
      puVar6 = PTR_DAT_04cb03e8;
      uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cb03e8,0);
      Dino_BusSand_App_UI_CommerceUi__SetActive_22ac144(uVar11,bVar8);
      puVar7 = PTR_DAT_04cb0408;
      uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cb0408,0);
      Dino_BusSand_App_UI_CommerceUi__SetActive_22ac144(uVar11,bVar1);
      uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cb5fb0,0);
      Dino_BusSand_App_UI_CommerceUi__SetActive_22ac144(uVar11,bVar8);
      uVar11 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04cb5fb8,0);
      Dino_BusSand_App_UI_CommerceUi__SetActive_22ac144(uVar11,bVar1);
      if (param_3 != 0x3e9) {
        lVar12 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)puVar5,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
        lVar17 = 0;
        if ((uVar10 & 1) != 0) {
          if (lVar12 == 0) goto LAB_023aedec;
          lVar17 = UnityEngine_Component__GetComponent_object__26f97e8
                             (lVar12,*(undefined8 *)PTR_DAT_04cad788);
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8(param_3,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar17,0,0);
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
          if ((uVar10 & 1) != 0) {
            if (lVar17 == 0) goto LAB_023aedec;
            UnityEngine_UI_Image__set_sprite_44a7258(lVar17,uVar11,0);
          }
        }
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = Dino_BusSand_App_UI_CommerceUi__IsCurrency_22ab3f0(param_3);
      uVar11 = System_Int64__ToString_482e7e4(&uStack_68,0);
      if ((uVar10 & 1) == 0) {
        uVar11 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar11,0);
      }
      lVar12 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)puVar6,0);
      lVar9 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)puVar7,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
      if ((uVar10 & 1) != 0) {
        if (lVar12 == 0) goto LAB_023aedec;
        uVar13 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)PTR_DAT_04caed30,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar4);
        }
        Dino_BusSand_App_UI_CommerceUi__SetText_22ac074(uVar13,uVar11);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
      if ((uVar10 & 1) != 0) {
        if (lVar9 == 0) goto LAB_023aedec;
        uVar13 = UnityEngine_Transform__Find_43d4bec(lVar9,*(undefined8 *)PTR_DAT_04caed30,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar4);
        }
        Dino_BusSand_App_UI_CommerceUi__SetText_22ac074(uVar13,uVar11);
      }
    }
    lVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                      (param_2,*(undefined8 *)PTR_DAT_04cada30);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (lVar9 != 0) {
      UnityEngine_Animation__Stop_4334660(lVar9,0);
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      puVar14 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      UnityEngine_Transform__set_localScale_43d1be0(*puVar14,puVar14[1],puVar14[2],param_2,0);
      lVar12 = *(long *)(param_1 + 0x40);
      if (lVar12 != 0) {
        lVar17 = *(long *)(lVar12 + 0x10);
        lVar16 = *(long *)PTR_DAT_04cb5fa8;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar17 != 0) {
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
            plVar15 = (long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
            *plVar15 = lVar9;
            thunk_FUN_02134474(plVar15,lVar9);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar12,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                    );
          return;
        }
      }
    }
  }
LAB_023aedec:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

