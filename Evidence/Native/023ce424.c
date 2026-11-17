/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<Sequence>d__58$$MoveNext
bool Dino_BusSand_App_UI_GuidePanel__Sequence_d__58__MoveNext (Dino_BusSand_App_UI_GuidePanel__Sequence_d__58_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<Sequence>d__58$$MoveNext
   bool Dino_BusSand_App_UI_GuidePanel__Sequence_d__58__MoveNext
   (Dino_BusSand_App_UI_GuidePanel__Sequence_d__58_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_GuidePanel__Sequence_d__58__MoveNext_22ce424(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uStack_18;
  
  if ((bRam0000000004f9c395 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cabdc0);
    FUN_02132f7c(PTR_DAT_04cb6b48);
    bRam0000000004f9c395 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x20);
  uStack_18 = 0;
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x4c) != 1) {
        return 0;
      }
      *(undefined4 *)(lVar6 + 0x4c) = 2;
      return 0;
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
    if (lVar6 != 0) {
      uVar5 = Dino_BusSand_App_UI_GuidePanel__TryResolveAnchor_22c912c(lVar6,&uStack_18);
      uVar3 = uStack_18;
      if ((uVar5 & 1) == 0) {
        if (*(long *)(lVar6 + 0x38) != 0) {
          uVar4 = System_Int32__ToString_482d750(*(long *)(lVar6 + 0x38) + 0x10,0);
          uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb6b48,uVar4,0);
          if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
          }
          UnityEngine_Debug__LogWarning_4357a30(uVar4,0);
          Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar6,0);
          return 0;
        }
      }
      else {
        uVar7 = uStack_18._4_4_;
        *(undefined4 *)(lVar6 + 0x4c) = 1;
        *(undefined4 *)(lVar6 + 0x44) = (undefined4)uStack_18;
        *(undefined4 *)(lVar6 + 0x48) = uStack_18._4_4_;
        if (*(long *)(lVar6 + 0x38) != 0) {
          if (*(int *)(*(long *)(lVar6 + 0x38) + 0x44) == 0) {
            Dino_BusSand_App_UI_GuidePanel__BuildHole_22c9478
                      (uStack_18 & 0xffffffff,uStack_18._4_4_,lVar6);
          }
          else {
            Dino_BusSand_App_UI_GuidePanel__ShowIconRaise_22ca5e0(lVar6);
          }
          Dino_BusSand_App_UI_GuidePanel__ShowTips_22cabf8(uVar3 & 0xffffffff,uVar7,lVar6);
          Dino_BusSand_App_UI_GuidePanel__ShowPointer_22cbde4(uVar3 & 0xffffffff,uVar7,lVar6);
          if (*(long *)(lVar6 + 0x38) != 0) {
            uVar7 = 0x3e800000;
            if (*(int *)(*(long *)(lVar6 + 0x38) + 0x44) != 0) {
              uVar7 = 0;
            }
            uVar4 = Dino_BusSand_App_UI_GuidePanel__FadeGroup_22cd648(0,0x3f800000,uVar7,lVar6,8);
            *(undefined8 *)(param_1 + 0x18) = uVar4;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
            *(undefined4 *)(param_1 + 0x10) = 2;
            return 1;
          }
        }
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x38) != 0)) {
      uVar2 = *(uint *)(*(long *)(lVar6 + 0x38) + 0x54);
      if (*(int *)(*(long *)PTR_DAT_04cabdc0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_UI_GuidePanel__Wait_22cd710
                        ((float)(int)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) * _UNK_00e20a7c);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

