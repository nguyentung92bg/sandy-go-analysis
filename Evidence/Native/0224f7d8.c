/* IL2CPP: Dino.BusSand.App.Countdown$$Days
System_String_o* Dino_BusSand_App_Countdown__Days (int64_t seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Countdown$$Days
   System_String_o* Dino_BusSand_App_Countdown__Days (int64_t seconds, const MethodInfo* method); */

void Dino_BusSand_App_Countdown__Days_214f7d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_28;
  
  puVar2 = PTR_DAT_04cab3a8;
  puVar1 = PTR_DAT_04cab3a0;
  if ((bRam0000000004f9b7b8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab3a8);
    FUN_02132f7c(PTR_DAT_04cab3a0);
    bRam0000000004f9b7b8 = 1;
  }
  lStack_28 = param_1 / 0x15180;
  uVar3 = System_Int64__ToString_482e7e4(&lStack_28,0);
  lStack_28 = (param_1 / 0xe10) % 0x18;
  uVar4 = System_Int64__ToString_482e7e4(&lStack_28,0);
                    /* try { // try from 0224f8ac to 0234f8b7 has its CatchHandler @ 0224ffbc */
  System_String__Concat_46d30e8(uVar3,*(undefined8 *)puVar1,uVar4,*(undefined8 *)puVar2,0);
                    /* try { // try from 0224f8bc to 0234f8cf has its CatchHandler @ 0224ff90 */
  return;
}

