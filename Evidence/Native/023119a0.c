/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$PersistUi
void Dino_BusSand_App_Meta_JourneyTracking__PersistUi (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$PersistUi
   void Dino_BusSand_App_Meta_JourneyTracking__PersistUi (const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__PersistUi_22119a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bda9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bda9 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04caba90;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    lVar4 = *(long *)PTR_DAT_04caba90;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar7 + 0x38) != '\0') {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      uVar5 = Dino_BusSand_App_Meta_Journey_UiJourney__get_Empty_229a488(lVar7,0);
      if ((uVar5 & 1) == 0) {
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar6 = Dino_BusSand_App_Meta_Journey_UiJourney__Encode_229abcc(lVar4,2,0);
        puVar8 = (undefined8 *)(lVar3 + 0x98);
        *puVar8 = uVar6;
        thunk_FUN_02134474(puVar8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
      }
    }
  }
  return;
}

