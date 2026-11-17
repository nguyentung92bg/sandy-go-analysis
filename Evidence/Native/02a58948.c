/* IL2CPP: Dino.BusSand.Util$$GetOrAdd<object>
Il2CppObject* Dino_BusSand_Util__GetOrAdd_object_ (UnityEngine_GameObject_o* go, const MethodInfo_2958948* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Util$$GetOrAdd<object>
   Il2CppObject* Dino_BusSand_Util__GetOrAdd_object_ (UnityEngine_GameObject_o* go, const
   MethodInfo_2958948* method); */

undefined8 Dino_BusSand_Util__GetOrAdd_object__2958948(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uStack_18;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_0216b4cc(param_2);
  }
  uStack_18 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = UnityEngine_GameObject__TryGetComponent_object__275b754
                    (param_1,&uStack_18,**(undefined8 **)(param_2 + 0x38));
  if ((uVar1 & 1) == 0) {
    uStack_18 = UnityEngine_GameObject__AddComponent_object__275a54c
                          (param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10));
  }
  return uStack_18;
}

