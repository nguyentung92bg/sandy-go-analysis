/* IL2CPP: Dino.BusSand.GameAssets$$GetClip
UnityEngine_AudioClip_o* Dino_BusSand_GameAssets__GetClip (Dino_BusSand_GameAssets_o* __this, System_String_o* clipName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAssets$$GetClip
   UnityEngine_AudioClip_o* Dino_BusSand_GameAssets__GetClip (Dino_BusSand_GameAssets_o* __this,
   System_String_o* clipName, const MethodInfo* method); */

long * Dino_BusSand_GameAssets__GetClip_2374df0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_38;
  
  if ((bRam0000000004f9c814 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac3b0);
    FUN_02132f7c(PTR_DAT_04cbb258);
    FUN_02132f7c(PTR_DAT_04cbb1c8);
    FUN_02132f7c(PTR_DAT_04cbb1d0);
    FUN_02132f7c(PTR_DAT_04cbb260);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac378);
    bRam0000000004f9c814 = 1;
  }
  plStack_38 = (long *)0x0;
  plVar5 = (long *)(param_1 + 0x78);
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar2 = Dino_BusSand_GameAssets__Index_object__275a37c(uVar6,*(undefined8 *)PTR_DAT_04cbb260);
    *plVar5 = lVar2;
    thunk_FUN_02134474(plVar5,lVar2);
    lVar2 = *plVar5;
    if (lVar2 == 0) goto LAB_02475030;
  }
  uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar2,param_2,&plStack_38,*(undefined8 *)PTR_DAT_04cbb1c8);
  puVar1 = PTR_DAT_04cab208;
  if ((uVar3 & 1) != 0) {
    return plStack_38;
  }
  lVar2 = *(long *)PTR_DAT_04cab208;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar7 = **(long **)(lVar2 + 0xb8);
  if (lVar7 == 0) {
LAB_02474f9c:
    plVar4 = (long *)0x0;
  }
  else {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *(undefined8 *)PTR_DAT_04cac3b0;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
    if (lVar7 == 0) goto LAB_02475030;
    plVar4 = (long *)(**(code **)(lVar7 + 0x18))
                               (*(undefined8 *)(lVar7 + 0x40),param_2,uVar6,
                                *(undefined8 *)(lVar7 + 0x28));
    if (plVar4 == (long *)0x0) goto LAB_02474f9c;
    if (*plVar4 != *(long *)PTR_DAT_04cbb258) {
      plVar4 = (long *)0x0;
    }
  }
  plStack_38 = plVar4;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(plVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_GameAssets__Miss_237cae0(*(undefined8 *)PTR_DAT_04cac378,param_2);
  }
  else {
    if (*plVar5 == 0) {
LAB_02475030:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (*plVar5,param_2,plStack_38,*(undefined8 *)PTR_DAT_04cbb1d0);
  }
  return plStack_38;
}

