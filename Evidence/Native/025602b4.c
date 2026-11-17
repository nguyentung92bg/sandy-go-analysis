/* IL2CPP: Dino.GameCommon.LivesServiceNull$$get_InfiniteTimeRemaining
System_TimeSpan_o Dino_GameCommon_LivesServiceNull__get_InfiniteTimeRemaining (Dino_GameCommon_LivesServiceNull_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.GameCommon.LivesServiceNull$$get_InfiniteTimeRemaining
   System_TimeSpan_o Dino_GameCommon_LivesServiceNull__get_InfiniteTimeRemaining
   (Dino_GameCommon_LivesServiceNull_o* __this, const MethodInfo* method); */

undefined8 Dino_GameCommon_LivesServiceNull__get_InfiniteTimeRemaining_24602b4(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caa538;
  if ((bRam0000000004f9ce1b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa538);
    bRam0000000004f9ce1b = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}

