/* IL2CPP: Dino.BusSand.App.UI.KitToggle.<>c__DisplayClass11_0$$<Build>b__0
void Dino_BusSand_App_UI_KitToggle___c__DisplayClass11_0___Build_b__0 (Dino_BusSand_App_UI_KitToggle___c__DisplayClass11_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitToggle.<>c__DisplayClass11_0$$<Build>b__0
   void Dino_BusSand_App_UI_KitToggle___c__DisplayClass11_0___Build_b__0
   (Dino_BusSand_App_UI_KitToggle___c__DisplayClass11_0_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_KitToggle___c__DisplayClass11_0___Build_b__0_2287f50(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
  }
  puVar2 = PTR_DAT_04cb5000;
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c164 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb5008);
    FUN_02132f7c(PTR_DAT_04cb5010);
    FUN_02132f7c(PTR_DAT_04cb5000);
    bRam0000000004f9c164 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar4,0);
  if (lVar4 == 0) {
LAB_0238782c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(long *)(lVar4 + 0x10) = lVar8;
  thunk_FUN_02134474((long *)(lVar4 + 0x10),lVar8);
  lVar7 = *(long *)(lVar8 + 0x40);
  if (lVar7 == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
    ;
  }
  bVar3 = bVar3 & 1;
  *(byte *)(lVar4 + 0x18) = bVar3;
  if ((*(char *)(lVar8 + 0x49) != '\0') && (*(byte *)(lVar8 + 0x48) != bVar3)) {
    uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar8,0);
    puVar2 = PTR_DAT_04cad568;
    bVar3 = *(byte *)(lVar4 + 0x18);
    if ((uVar5 & 1) != 0) {
      *(byte *)(lVar8 + 0x48) = bVar3;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar2;
      }
      if (**(long **)(lVar7 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Toggle_23835f0
                  (**(long **)(lVar7 + 0xb8),*(undefined1 *)(lVar4 + 0x18),0);
      }
      if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Tween__KillAll_2161a90(lVar8,0);
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
      System_Action_float____ctor_35f1448(uVar6,lVar4,*(undefined8 *)PTR_DAT_04cb5008,0);
      lVar7 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e20aec,uVar6,0);
      if ((lVar7 != 0) &&
         (lVar7 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar7,1,0), lVar7 != 0)) {
        lVar8 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar7,lVar8,0);
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar6,lVar4,*(undefined8 *)PTR_DAT_04cb5010,0);
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x40) = uVar6;
          thunk_FUN_02134474((undefined8 *)(lVar8 + 0x40),uVar6,0);
          return lVar8;
        }
      }
      goto LAB_0238782c;
    }
  }
  lVar7 = Dino_BusSand_App_UI_KitToggle__Apply_2287838(0x3f800000,lVar8,bVar3 != 0);
  uVar1 = *(undefined1 *)(lVar4 + 0x18);
  *(undefined1 *)(lVar8 + 0x49) = 1;
  *(undefined1 *)(lVar8 + 0x48) = uVar1;
  return lVar7;
}

