/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$LateUpdate
void Dino_BusSand_App_UI_HudPanel__LateUpdate (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$LateUpdate
   void Dino_BusSand_App_UI_HudPanel__LateUpdate (Dino_BusSand_App_UI_HudPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__LateUpdate_230b974(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uStack_58;
  
  puVar6 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c51c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafec0);
    FUN_02132f7c(PTR_DAT_04cafec8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cb8188);
    FUN_02132f7c(PTR_DAT_04cb8190);
    bRam0000000004f9c51c = 1;
  }
  uStack_58 = 0;
  Dino_BusSand_App_UI_HudPanel__PlaceTab_230bd14(param_1);
  Dino_BusSand_App_UI_HudPanel__FadeTagUnderTopBar_230b07c(param_1);
  Dino_BusSand_App_UI_HudPanel__UpdateItemMask_230c3f0(param_1);
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  if ((uVar12 & 1) == 0) {
    lVar13 = 0;
LAB_0240baf8:
    uVar11 = 0;
    bVar5 = true;
  }
  else {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0240bc80;
    lVar13 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                       (*(long *)(param_1 + 0x40),0);
    if (lVar13 == 0) goto LAB_0240baf8;
    lVar14 = *(long *)(param_1 + 0x40);
    if (lVar14 == 0) goto LAB_0240bc80;
    if (*(int *)(lVar14 + 0x20) == 2) {
      uVar16 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328(lVar14,0);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar6);
      }
      uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
      if ((uVar12 & 1) != 0) {
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_0240bc80;
        uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
        if ((uVar12 & 1) == 0) goto LAB_0240bae8;
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (lVar14 = *(long *)(*(long *)(param_1 + 0x40) + 0x38), lVar14 == 0)) goto LAB_0240bc80;
        if ((*(long *)(lVar14 + 0x30) == 0) || (*(char *)(lVar13 + 0x81) != '\0'))
        goto LAB_0240bae8;
        uVar11 = Dino_BusSand_View_GameView__get_FinalePlaying_23a9c88(lVar14,0);
        bVar5 = false;
        uVar11 = uVar11 ^ 1;
        goto LAB_0240bb00;
      }
    }
LAB_0240bae8:
    bVar5 = false;
    uVar11 = 0;
  }
LAB_0240bb00:
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x70),0),
     lVar14 != 0)) {
    uVar9 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar14,0);
    if ((uVar11 & 1) != (uVar9 & 1)) {
      if ((*(long *)(param_1 + 0x70) == 0) ||
         (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x70),0),
         lVar14 == 0)) goto LAB_0240bc80;
      UnityEngine_GameObject__SetActive_43c1408(lVar14,uVar11 & 1,0);
    }
    if ((uVar11 & 1) == 0) {
      return;
    }
    if ((!bVar5) && (*(long *)(lVar13 + 0x20) != 0)) {
      iVar10 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(lVar13 + 0x20),0);
      uStack_58 = CONCAT44(iVar10,(undefined4)uStack_58);
      if (*(long *)(lVar13 + 0x20) != 0) {
        iVar2 = *(int *)(param_1 + 0xac);
        iVar3 = *(int *)(param_1 + 0xb0);
        iVar4 = *(int *)(*(long *)(lVar13 + 0x20) + 0x38);
        uStack_58 = CONCAT44(iVar10,iVar4);
        if ((iVar10 == iVar2) && (iVar4 == iVar3)) {
          return;
        }
        plVar17 = *(long **)(param_1 + 0x90);
        *(int *)(param_1 + 0xac) = iVar10;
        uVar16 = System_Int32__ToString_482d750((long)&uStack_58 + 4,0);
        uVar15 = System_Int32__ToString_482d750(&uStack_58,0);
        uVar16 = System_String__Concat_46d2b84(uVar16,*(undefined8 *)PTR_DAT_04cabd10,uVar15,0);
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x518))(plVar17,uVar16,*(undefined8 *)(*plVar17 + 0x520));
          if (iVar4 != iVar3) {
            Dino_BusSand_App_UI_HudPanel__BuildPips_230c624(param_1,uStack_58 & 0xffffffff);
          }
          lVar13 = *(long *)(param_1 + 0x98);
          *(undefined4 *)(param_1 + 0xb0) = (undefined4)uStack_58;
          puVar8 = PTR_DAT_04cb8190;
          puVar7 = PTR_DAT_04cb8188;
          puVar6 = PTR_DAT_04cafec8;
          if (lVar13 != 0) {
            iVar10 = 0;
            do {
              if (*(int *)(lVar13 + 0x18) <= iVar10) {
                uVar12 = uStack_58 & 0xffffffff;
                if ((-1 < iVar2) && (iVar4 == iVar3)) {
                  Dino_BusSand_App_UI_HudPanel__CounterBeat_230ca0c(param_1,iVar2,uStack_58._4_4_);
                  uVar12 = uStack_58 & 0xffffffff;
                }
                if (((iVar4 != iVar3) && (0 < iVar3)) && (iVar3 < (int)uVar12)) {
                  Dino_BusSand_App_UI_HudPanel__CapacityBeat_230cbb8(param_1,iVar3,uVar12);
                  uVar12 = uStack_58 & 0xffffffff;
                }
                Dino_BusSand_App_UI_HudPanel__CounterTension_230ce78(param_1,uStack_58._4_4_,uVar12)
                ;
                return;
              }
              lVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (lVar13,iVar10,*(undefined8 *)puVar6);
              puVar1 = (undefined8 *)puVar7;
              if (uStack_58._4_4_ <= iVar10) {
                puVar1 = (undefined8 *)puVar8;
              }
              uVar16 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*puVar1,0);
              if (lVar13 == 0) break;
              UnityEngine_UI_Image__set_sprite_44a7258(lVar13,uVar16,0);
              lVar13 = *(long *)(param_1 + 0x98);
              iVar10 = iVar10 + 1;
            } while (lVar13 != 0);
          }
        }
      }
    }
  }
LAB_0240bc80:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

