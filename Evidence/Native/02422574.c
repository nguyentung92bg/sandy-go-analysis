/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$HiddenIntro
void Dino_BusSand_App_UI_LiveOpsHome__HiddenIntro (System_Collections_Generic_List_IEnumerator__o* steps, bool on, int32_t kind, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$HiddenIntro
   void Dino_BusSand_App_UI_LiveOpsHome__HiddenIntro
   (System_Collections_Generic_List_IEnumerator__o* steps, bool on, int32_t kind, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_LiveOpsHome__HiddenIntro_2322574
               (long param_1,ulong param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar4 = PTR_DAT_04cb8ab8;
  puVar3 = PTR_DAT_04cb8ab0;
  puVar2 = PTR_DAT_04cafb00;
  if ((bRam0000000004f9c5bc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cafb00);
    FUN_02132f7c(PTR_DAT_04cb8a30);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb8ac0);
    FUN_02132f7c(PTR_DAT_04cb8ab0);
    FUN_02132f7c(PTR_DAT_04cb8ab8);
    bRam0000000004f9c5bc = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar5,0);
  uStack_58 = *(undefined8 *)puVar2;
  uStack_50 = 0xffffffffffffffff;
  uStack_48 = param_3;
  uVar6 = System_Enum__ToString_4863070(&uStack_58,0);
  uVar6 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uVar6,0);
  if (lVar5 == 0) {
LAB_02422754:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  puVar9 = (undefined8 *)(lVar5 + 0x10);
  *puVar9 = uVar6;
  thunk_FUN_02134474(puVar9,uVar6);
  if ((param_2 & 1) != 0) {
    uVar6 = *puVar9;
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(uVar6,0);
    if ((uVar7 & 1) == 0) {
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar6,lVar5,*(undefined8 *)PTR_DAT_04cb8ac0,0);
      uVar6 = Dino_BusSand_App_UI_LiveOpsHome__Intro_23217fc(param_3,uVar6);
      if (param_1 != 0) {
        lVar5 = *(long *)(param_1 + 0x10);
        lVar8 = *(long *)PTR_DAT_04cb8a30;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(param_1 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(param_1 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
            thunk_FUN_02134474();
            return;
          }
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (param_1,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                    );
          return;
        }
      }
      goto LAB_02422754;
    }
  }
  return;
}

