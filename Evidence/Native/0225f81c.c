/* IL2CPP: Dino.BusSand.App.Lang$$English
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Lang__English (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Lang$$English
   System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Lang__English (const
   MethodInfo* method); */

long Dino_BusSand_App_Lang__English_215f81c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04cab550;
  if ((bRam0000000004f9b819 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cac078);
    bRam0000000004f9b819 = 1;
  }
  puVar2 = PTR_DAT_04cac078;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  uVar5 = System_String__op_Equality_46d1108
                    (**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)puVar2,0);
  lVar4 = *(long *)puVar1;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = Dino_BusSand_App_Lang__Read_215f4bc(*(undefined8 *)puVar2);
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar7 = lVar8;
      thunk_FUN_02134474(plVar7,lVar8);
    }
    return lVar8;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cab550;
  if ((bRam0000000004f9b818 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550);
    bRam0000000004f9b818 = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  if (puVar6[1] != 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar5 = System_String__op_Inequality_46d110c(puVar6[3],*puVar6,0);
    if ((uVar5 & 1) == 0) goto LAB_0225f494;
    lVar4 = *(long *)puVar1;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  uVar3 = Dino_BusSand_App_Lang__Read_215f4bc(**(undefined8 **)(lVar4 + 0xb8));
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar6 = uVar3;
  thunk_FUN_02134474(puVar6,uVar3);
  (*(undefined8 **)(*(long *)puVar1 + 0xb8))[3] = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  thunk_FUN_02134474();
LAB_0225f494:
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  return *(long *)(*(long *)(lVar4 + 0xb8) + 8);
}

