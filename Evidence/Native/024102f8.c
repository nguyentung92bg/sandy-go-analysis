/* IL2CPP: Dino.BusSand.App.UI.KitParts$$StreakTag
void Dino_BusSand_App_UI_KitParts__StreakTag (UnityEngine_RectTransform_o* box, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitParts$$StreakTag
   void Dino_BusSand_App_UI_KitParts__StreakTag (UnityEngine_RectTransform_o* box, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_KitParts__StreakTag_23102f8(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  int iStack_24;
  
  puVar2 = PTR_DAT_04cb8228;
  if ((bRam0000000004f9c549 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caf410);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb8230);
    FUN_02132f7c(PTR_DAT_04cb8228);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cab330);
    FUN_02132f7c(PTR_DAT_04cb8238);
    FUN_02132f7c(PTR_DAT_04caf950);
    FUN_02132f7c(PTR_DAT_04cb4ea8);
    FUN_02132f7c(PTR_DAT_04cb8240);
    FUN_02132f7c(PTR_DAT_04cafe68);
    bRam0000000004f9c549 = 1;
  }
  iStack_24 = 0;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_App_UI_KitParts___c__DisplayClass14_0___ctor_2310db0(lVar3,0);
  uVar4 = Dino_BusSand_App_Meta_WinStreak__get_WouldLoseProgress_229451c(0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    lVar5 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
    if (lVar5 != 0) {
      iStack_24 = Dino_BusSand_App_Meta_WinStreak__LastCheckpointFloor_22943dc
                            (*(undefined4 *)(lVar5 + 0x18),0);
      iStack_24 = iVar1 - iStack_24;
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                        (0x432a0000,0x432a0000,0,0,param_1,*(undefined8 *)PTR_DAT_04cb8238,0,0,0);
      if (lVar3 != 0) {
        puVar8 = (undefined8 *)(lVar3 + 0x10);
        *puVar8 = uVar6;
        thunk_FUN_02134474(puVar8,uVar6);
        Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
                  (0x43d70000,_UNK_00e20964,*puVar8,*(undefined8 *)PTR_DAT_04caf410);
        plVar7 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                   (0x43200000,0x43190000,0,0,0x3f800000,*puVar8,
                                    *(undefined8 *)PTR_DAT_04cafe68,*(undefined8 *)PTR_DAT_04caf950,
                                    0,0);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x2c8))(plVar7,0,*(undefined8 *)(*plVar7 + 0x2d0));
          uVar9 = *puVar8;
          uVar6 = System_Int32__ToString_482d750(&iStack_24,0);
          uVar6 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cab330,uVar6,0);
          uStack_48 = 0;
          uStack_40 = 0;
          uStack_38 = 0;
          System_Nullable_Color____ctor_2bc9090
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_48,
                     *(undefined8 *)PTR_DAT_04cac878);
          uStack_58 = uStack_40;
          uStack_60 = uStack_48;
          uStack_50 = uStack_38;
          Dino_BusSand_App_UI_UiKit__Text_2282314
                    (0x42800000,0x430c0000,0x42a00000,0x42400000,0xc2680000,uVar9,
                     *(undefined8 *)PTR_DAT_04cb8240,uVar6,*(undefined8 *)PTR_DAT_04cb4ea8,
                     &uStack_60,0x202,0);
          uVar6 = *puVar8;
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                    (0x3f000000,_UNK_00e207cc,_UNK_00e20590,_UNK_00e1feac,uVar6,0,0,0);
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cb8230,0);
          if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar3 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e1fea8,uVar6,0);
          if (lVar3 != 0) {
            Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar3,1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

