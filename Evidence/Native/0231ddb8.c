/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking.<>c__DisplayClass23_0$$<WrapInbound>b__0
int32_t Dino_BusSand_App_Meta_JourneyTracking___c__DisplayClass23_0___WrapInbound_b__0 (Dino_BusSand_App_Meta_JourneyTracking___c__DisplayClass23_0_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking.<>c__DisplayClass23_0$$<WrapInbound>b__0
   int32_t Dino_BusSand_App_Meta_JourneyTracking___c__DisplayClass23_0___WrapInbound_b__0
   (Dino_BusSand_App_Meta_JourneyTracking___c__DisplayClass23_0_o* __this, int32_t id, const
   MethodInfo* method); */

undefined4
Dino_BusSand_App_Meta_JourneyTracking___c__DisplayClass23_0___WrapInbound_b__0_221ddb8
          (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000004f9bdae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bdae = 1;
  }
  puVar1 = PTR_DAT_04caba90;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),param_2,*(undefined8 *)(lVar3 + 0x28));
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar6 = *(long *)(lVar3 + 0xb8);
  lVar4 = *(long *)(lVar6 + 0x18);
  if (lVar4 != 0) {
    uVar5 = *(uint *)(lVar6 + 0x20);
    if ((int)uVar5 < *(int *)(lVar4 + 0x18)) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar5 = *(uint *)(lVar3 + 0x20);
        lVar4 = *(long *)(lVar3 + 0x18);
        *(uint *)(lVar3 + 0x20) = uVar5 + 1;
        if (lVar4 == 0) goto LAB_0231dea0;
      }
      else {
        *(uint *)(lVar6 + 0x20) = uVar5 + 1;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(undefined4 *)(lVar4 + (long)(int)uVar5 * 4 + 0x20) = uVar2;
    }
    return uVar2;
  }
LAB_0231dea0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

