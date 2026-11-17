/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<HookLoaded>b__22_1
void Dino_BusSand_Sdk_DinoAdProvider___c___HookLoaded_b__22_1 (Dino_BusSand_Sdk_DinoAdProvider___c_o* __this, System_String_o* id, MaxSdkBase_AdInfo_o* info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<HookLoaded>b__22_1
   void Dino_BusSand_Sdk_DinoAdProvider___c___HookLoaded_b__22_1
   (Dino_BusSand_Sdk_DinoAdProvider___c_o* __this, System_String_o* id, MaxSdkBase_AdInfo_o* info,
   const MethodInfo* method); */

void Dino_BusSand_Sdk_DinoAdProvider___c___HookLoaded_b__22_1_2431a28
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000004f9cc29 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbeff0);
    FUN_02132f7c(PTR_DAT_04cbf050);
    bRam0000000004f9cc29 = 1;
  }
  puVar1 = PTR_DAT_04cbeff0;
  if (param_3 != 0) {
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf050);
    Dino_BusSand_Sdk_DinoAdProvider_Loaded___ctor_2431644(uVar2,param_3);
                    /* try { // try from 02531a88 to 02631a8b has its CatchHandler @ 02531a98 */
                    /* try { // try from 02531a8c to 02631ab3 has its CatchHandler @ 02530ea4 */
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02531264 with catch @ 02531a90
                        */
    thunk_FUN_02142dc8();
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02531200 with catch @ 02531a94
                        */
    puVar4 = (undefined8 *)(lVar3 + 0x38);
    *puVar4 = uVar2;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02531a88 with catch @ 02531a98
                        */
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                   ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* try { // try from 02531ab4 to 02631ab7 has its CatchHandler @ 02531ad0 */
  return;
}

