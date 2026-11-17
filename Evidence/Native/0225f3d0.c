/* IL2CPP: Dino.BusSand.App.Lang$$Current
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Lang__Current (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Lang$$Current
   System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Lang__Current (const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Lang__Current_215f3d0(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_04cab550;
  if ((bRam0000000004f9b818 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550);
    bRam0000000004f9b818 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  puVar5 = *(undefined8 **)(lVar2 + 0xb8);
  if (puVar5[1] != 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar3 = System_String__op_Inequality_46d110c(puVar5[3],*puVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_0225f494;
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  uVar4 = Dino_BusSand_App_Lang__Read_215f4bc(**(undefined8 **)(lVar2 + 0xb8));
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar5 = uVar4;
  thunk_FUN_02134474(puVar5,uVar4);
  (*(undefined8 **)(*(long *)puVar1 + 0xb8))[3] = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  thunk_FUN_02134474();
LAB_0225f494:
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 0225f4b4 to 0235f4c3 has its CatchHandler @ 0225f560 */
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
}

