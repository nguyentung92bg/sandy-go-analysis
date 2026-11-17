/* IL2CPP: Dino.BusSand.GameAudio$$<Awake>b__53_0
System_Collections_Generic_List_ValueTuple_string__float_____o* Dino_BusSand_GameAudio___Awake_b__53_0 (Dino_BusSand_GameAudio_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0248623c) */
/* IL2CPP: Dino.BusSand.GameAudio$$<Awake>b__53_0
   System_Collections_Generic_List_ValueTuple_string__float_____o*
   Dino_BusSand_GameAudio___Awake_b__53_0 (Dino_BusSand_GameAudio_o* __this, const MethodInfo*
   method); */

undefined8 Dino_BusSand_GameAudio___Awake_b__53_0_2386124(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_04cbbc50;
  puVar2 = PTR_DAT_04cbbc48;
  puVar1 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c875 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cbbc50);
    FUN_02132f7c(PTR_DAT_04cbbc48);
    bRam0000000004f9c875 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor_39bb8f8
            (uVar4,*(undefined8 *)puVar3);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  puVar6 = (undefined8 *)FUN_02132f94(lVar5);
  *puVar6 = uVar4;
  uVar7 = FUN_02132f94(*(undefined8 *)puVar1);
  thunk_FUN_02134474(uVar7,uVar4);
  Dino_BusSand_GameAudio__BuildSynth_237eeb4(param_1);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  puVar6 = (undefined8 *)FUN_02132f94(lVar5);
  uVar4 = *puVar6;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  puVar6 = (undefined8 *)FUN_02132f94(lVar5);
  *puVar6 = 0;
  uVar7 = FUN_02132f94(*(undefined8 *)puVar1);
  thunk_FUN_02134474(uVar7,0);
  return uVar4;
}

